#include <cstdio>
#include <cstring> 
int main()
{
	char ch,stc[81][81],str[81];
	int len,j=0;
	gets(str);
	len=strlen(str);
	for(int i=0,k=0;i<len;i++)
	{           //一定要加 
		if(str[i]!=' ')
		{
			stc[j][k]=str[i];
			k++;
		}
		else
		{
			j++;
			k=0;
		}
	}
	for(int i=j;i>=0;i--)
	
	{
		printf("%s",stc[i]);
		if(i!=0)
		printf(" ");
	}
	return 0;
}
