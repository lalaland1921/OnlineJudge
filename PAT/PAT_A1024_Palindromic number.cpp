#include <algorithm>
#include <cstdio>
#include <cstring>
struct bign
{
	int d[15];
	int len;
	bign()
	{
		memset(d,0,sizeof(d));
		len=0;
	}
};
bign change(char str[])
{
	bign a;
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		a.d[a.len++]=str[len-1-i]-'0';
	}
	return a;
}
bign add(bign a)
{
	bign b;
	int carry=0;
	for(int i=0;i<a.len;i++)
	{
		b.d[b.len++]=(a.d[i]+a.d[a.len-1-i]+carry)%10;
		carry=(a.d[i]+a.d[a.len-1-i]+carry)/10;
	}
	if(carry!=0)
	b.d[b.len++]=carry;
	return b;
}
bool ispalin(bign a)
{
	for(int i=0;i<=a.len/2;i++)
	{
		if(a.d[i]!=a.d[a.len-1-i])
		return false;
	}
	return true;
}
void show(bign a)
{
	int i=a.len-1;
	while(a.d[i]==0)
	i--;
	for(;i>=0;i--)
	{
		printf("%d",a.d[i]);
	}
}
int main()
{
	bign a;
	char str[15];
	int k,count=0;
	scanf("%s%d",&str,&k);
	a=change(str);
	while(ispalin(a)==false&&count<k)
	{
		a=add(a);
		count++;
	}
	show(a);
	printf("\n");
	printf("%d",count);
	return 0;
}

