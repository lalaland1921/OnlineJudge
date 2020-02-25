#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[10001],letter[7]={'P','A','T','e','s','t'};
	int hashtable[128]={0},len,flag=0;
	cin>>str;
	len=strlen(str);
	for(int i=0;i<len;i++)
	{
		hashtable[str[i]]++;
	}
	do
	{
		flag=0;
		for(int i=0;i<6;i++)
		{
			if(hashtable[letter[i]]>0)
			{
				cout<<letter[i];
				hashtable[letter[i]]--;
				flag=1;
			}
		}
	}while(flag!=0);
	return 0;
}
