#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[1001];
	int hashtable[26]={0};
	gets(str);
	int len,temp;
	len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		hashtable[str[i]-'a']++;
		if(str[i]>='A'&&str[i]<='Z')
		hashtable[str[i]-'A']++;
	}
	int k=0;
	for(int i=0;i<26;i++)
	{
		if(hashtable[i]>hashtable[k])
		{
			k=i;
		}
	}
	char ch;
	ch='a'+k;
	cout<<ch<<" "<<hashtable[k]<<endl;
	return 0;
}
