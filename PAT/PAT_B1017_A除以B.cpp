#include <cstdio>
#include <cstring>
using namespace std;
int a[1001];
void change(char str[])
{
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		a[i]=str[i]-'0';
	}
}
int main()
{
	char str[1001];
	int b,q[1001],r=0,len;
	scanf("%s %d",&str,&b);
	len=strlen(str);
	change(str);
	int i=0;
	while(i<len)
	{
		r=r*10+a[i];
		q[i]=r/b;
		r=r%b;
		i++;
	}
	if(len==1)
	printf("0");
	else
	{
		for(int i=0;i<len;i++)
		{
			if(i==0&&q[i]!=0||i>0)
			printf("%d",q[i]);
		}
	}
	printf(" ");
	printf("%d",r);
	return 0;
}
