#include <cstdio>
#include <cmath>
using namespace std;
bool isprime(int a)
{
	if(a<=1)
	return false;
	else
	{
		int sq=(int)sqrt(1.0*a);
		for(int i=2;i<=sq;i++)
		{
			if(a%i==0)
			return false;
		}
	}
	return true;
}
int reverse(int n,int d)
{
	int ans=0;
	while(n>0)
	{
		ans=ans*d+n%d;
		n/=d;
	}
	return ans;
}
int main()
{
	int n,d,rev;
	while(1)
	{
		scanf("%d",&n);
		if(n<0)
		break;
		scanf("%d",&d);
		rev=reverse(n,d);
		if(isprime(n)==true&&isprime(rev)==true)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}
