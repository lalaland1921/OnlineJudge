#include <cstdio>
#include <string>
#include <vector>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
	char s[101];
	string a,b;
	vector <string> sen;
	gets(s);
	scanf("%s%s",a.c_str(),b.c_str());
	int len=strlen(s);
	sen.push_back(""); 
	for(int i=0,j=0;i<len;i++)
	{
		if(s[i]!=' ')
		{
			sen[j]+=s[i];;
		}
		else
		{
			if(sen[j]==a)
			sen[j]=b;
			sen.push_back("");
			j++;
		}
	}
	for(int i=0;i<sen.size()-1;i++)
	{
		if(i>0)
		printf(" ");
		if(sen[i]==a)
		cout<<b;
		else
		cout<<sen[i];
	}
	return 0;
}
