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
const int maxn=100000;
int main()
{
	int msize,n,num;
	bool is[maxn]={0};
	scanf("%d%d",&msize,&n);
	while(isprime(msize)==false)
	{
		msize++;
	}
	for(int j=0;j<n;j++)
	{
		scanf("%d",&num);
		int pos=num%msize;
		int i=0;
		while(i<msize)
			{
				if(is[(pos+i*i)%msize]==false)
				{
					printf("%d",(pos+i*i)%msize);
					is[(pos+i*i)%msize]=true;
					break;
				}
				else
				i++;
			}
		if(i>=msize)
		printf("-");
		if(j!=n-1)
		printf(" ");
	}
	return 0;
}
