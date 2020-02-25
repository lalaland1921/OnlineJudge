#include <cstdio>
#include <cstring>
using namespace std;
char A[13][5]={"tret","jan","fed","mar","apr","may","jun","jlf","aug","sep","oct","nov","dec"},B[12][4]={"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
void change(char str[])
{
	int len=strlen(str);
	if(str[0]>='0'&&str[0]<='9')
	{
		int a=0;
		for(int i=0;i<len;i++)
		{
			a=a*10+str[i]-'0';
		}
		printf("%s",A[a%13]);
		if(a/13!=0)
		printf(" %s",B[a/13]);
	}
	else
	{
		char str1[2][5];
		int j=0,k=0;
		for(int i=0;i<len;i++)
		{
			if(str[i]!=' ')
			str1[j][k++]=str[i];
			else
			{
				j++;
				k=0;
			}
		}
		if(j==0)
		{
			int i;
			for(i=0;i<13;i++)
			{
				if(strcmp(A[i],str1[0])==0)
				break;
			}
			printf("%d",i);
		}
		else
		{
			int i=0,a=0;
			for(i=0;i<13;i++)
			{
				if(strcmp(B[i],str1[0])==0)
				break;
			}
			a+=13*i;
			for(i=0;i<13;i++)
			{
				if(strcmp(A[i],str1[1])==0)
				break;
			}
			a+=i+1;
			printf("%d",a);
		}
	}
	printf("\n");
}
int main()
{
	int n;
	char str[8];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		gets(str);
		change(str);
	}
}
