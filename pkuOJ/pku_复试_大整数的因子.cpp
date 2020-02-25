#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	char str[32];
	int len,a[32];
	while(scanf("%s",str)!=EOF)
	{
		len=strlen(str);
		for(int i=0;i<len;i++)
		a[i]=str[i]-'0';
		int flag=0;
		for(int k=2;k<=9;k++)
		{
			int sign=0;
			for(int i=0;i<len;i++)
			{
				sign=(sign*10+a[i])%k;
			}
			if(sign==0)
			{
				if(flag==1)
				printf(" ");
				printf("%d",k);
				flag=1; 
			}
		}
		if(flag==0)
		printf("none");
		printf("\n");
	}
}
