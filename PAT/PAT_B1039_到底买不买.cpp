#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[1001];
	int len1,len2,hashtable[128]={0};
	cin>>str;
	len1=strlen(str);
	for(int i=0;i<len1;i++)
	hashtable[str[i]]++;
	cin>>str;
	len2=strlen(str);
	int i,count=0;
	for(i=0;i<len2;i++)
	{
		hashtable[str[i]]--;
		if(hashtable[str[i]]<0)
		count++;
	}
	if(count>0)
	cout<<"No "<<count<<endl;
	else
	cout<<"Yes "<<len1-len2;
	return 0; 
}
