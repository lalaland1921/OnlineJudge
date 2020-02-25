#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;
bool judge(char a)
{
	if(a>='a'&&a<='z'||a>='A'&&a<='Z')
	return true;
	return false;
}
bool cmp(char a,char b)
{
	if(a>='A'&&a<='Z')
	a=a+'a'-'A';
	if(b>='A'&&b<='Z')
	b+='a'-'A';
	return a<b;
}
int main()
{
	char str[1000],s[1000];
	int len;
	while(gets(str)&&strlen(str)!=0)
	{
		len=strlen(str);
		for(int i=0,j=0;i<len;i++)
		{
			if(judge(str[i]))
			s[j++]=str[i];
		}
		int l=strlen(s);
		stable_sort(s,s+l,cmp);
		for(int i=0,j=0;i<len;i++)
		{
			if(judge(str[i]))
			cout<<s[j++];
			else
			cout<<str[i];
		}
	}
	return 0;
}
