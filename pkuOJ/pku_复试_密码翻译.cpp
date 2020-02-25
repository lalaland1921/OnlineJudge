#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[81];
	int len;
	while(gets(str))
	{
		len=strlen(str);
		for(int i=0;i<len;i++)
		{
			if(str[i]>='a'&&str[i]<='z')
			printf("%c",'a'+(str[i]+1-'a')%26);
			else if(str[i]>='A'&&str[i]<='Z')
			printf("%c",'A'+(str[i]+1-'A')%26);
			else
			printf("%c",str[i]);
		}
	}
	return 0;
}
