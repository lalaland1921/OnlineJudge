#include <cstdio>
#include <cstring>
int a[22]={0},len;
void change(char str[])
{
	for(int i=0;i<len;i++)
	{
		a[i+1]=str[i]-'0';
	}
}
void count(int a[],int num[])
{
	for(int i=1;i<=len;i++)
	{
		num[a[i]]++;
	}
}
bool check(int num[])
{
	for(int i=0;i<10;i++)
	{
		if(num[i]!=0)
		return false;
	}
	return true;
}
int main()
{
	char str[22];
	int num[10]={0};
	scanf("%s",&str);
	len=strlen(str);
	change(str);
	count(a,num);
	int jin=0;
	for(int i=len;i>=0;i--)
	{
		a[i]=a[i]*2+jin;
		jin=a[i]/10;
		a[i]%=10;
	}
	if(a[0]!=0)
	{
		printf("No\n%d",a[0]);
	}
	else
	{
		for(int i=1;i<=len;i++)
		{
			num[a[i]]--;
		}
		if(check(num)==true)
		printf("Yes\n");
		else
		printf("No\n");
	}
	for(int i=1;i<=len;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
