#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char s1[10001],s2[10001];
	int len1,len2,hashtable[128]={0};
	gets(s1);
	len1=strlen(s1);
	gets(s2);
	len2=strlen(s2);
	for(int i=0;i<len2;i++)
	{
		hashtable[s2[i]]++;
	}
	for(int i=0;i<len1;i++)
	{
		if(hashtable[s1[i]]>0);
		else
		printf("%c",s1[i]);	
	}
	return 0;
}
