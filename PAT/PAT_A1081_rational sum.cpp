#include <iostream>
#include <string.h>
using namespace std;
char a[25];
long long gcd(long long a,long long b)
{
	if(b==0)
	return a;
	else return gcd(b,a%b);
}
struct NUM
{
	long long numerator,denominator,integer;
}num,ans;
long long change(int i,int j)
{
	long long b=0;
	while(i<=j)
	{
		b=b*10+(a[i]-'0');
		i++;
	}
	return b;
}
int main()
{
	int n,len;
	long long nume,deno;
	ans.numerator=0;ans.denominator=1;ans.integer=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%s",&a);
		len=strlen(a);
		int l=0,r;
		if(a[0]=='-')
		l++;
		r=l;
		while(a[r]!='/')
		r++;
		num.numerator=change(l,r-1);
		num.denominator=change(r+1,len-1);
		if(a[0]=='-')
		num.numerator*=-1;
		nume=ans.numerator*num.denominator+num.numerator*ans.denominator;
		deno=ans.denominator*num.denominator;
		ans.integer+=nume/deno;
		nume-=deno*(nume/deno);
		long long temp=gcd(nume,deno);
		ans.numerator=nume/temp;
		ans.denominator=deno/temp;
	}
	if(ans.integer<0)
	{
		cout<<"-";
		if(ans.numerator>0)
		{
			ans.integer++;
			ans.integer*=(-1);
			ans.numerator=ans.denominator-ans.numerator;
		}
		else
		{
			ans.integer*=(-1);;
			ans.numerator*=(-1);
		}
	}
	else
	{
		if(ans.numerator<0)
		{
			ans.integer--;
			ans.numerator=ans.denominator+ans.numerator;
		}
	}
	if(ans.integer!=0)
	cout<<ans.integer<<" ";
	scanf("%ld/%ld",ans.numerator,ans.denominator);
	return 0;
}
