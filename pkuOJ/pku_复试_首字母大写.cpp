#include <cstdio>
#include <cstring>
#include <stdio.h>
using namespace std;
int main()
{
	char sen[102]={" "};
	int size=0;
	while(gets(sen+1))
	{
		int len=strlen(sen);
		for(int i=1;i<len;i++)
		{
			if((sen[i-1]==' '||sen[i-1]=='\t'||sen[i-1]=='\r'&&sen[i]>='a'&&sen[i]<='z'))
			{
				sen[i]+='A'-'a';
			}
			printf("%c",sen[i]);
		}
		printf("\n");
	}
	return 0;
}
