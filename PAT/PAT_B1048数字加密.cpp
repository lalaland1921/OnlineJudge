#include <cstdio>
#include <cstring>
using namespace std;
void change(char A[],int a[],int len)
{
	for(int i=0;i<len;i++)
	{
		a[i]=A[i]-'0';
	}
}
int main()
{
	char A[100],B[100],d[3]={'J','Q','K'},c;
	int a[100],b[100],len1,len2,bit;
	scanf("%s",&A);
	scanf("%s",&B);
	len1=strlen(A);
	len2=strlen(B);
	change(A,a,len1);
	change(B,b,len2);
	for(int i=0;i<len2;i++)
	{
		bit=len2-i;
		if(len1-bit<0)
		c=B[i];
		else
		{
			if(bit%2==1)
			{
				if((a[len1-bit]+b[i])%13<10)
				c=(a[len1-bit]+b[i])%13+'0';
				else
				c=d[(a[len1-bit]+b[i])%13-10];
			}
			else
			{
				c=(b[i]-a[len1-bit]+10)%10+'0';
			}
		}
		printf("%c",c);
	}
	return 0;
}
