#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	long long n,temp;
	int key,num=0,l=2,r=2,sqr;
	scanf("%lld",&n);
	key=temp=n;
	sqr=(int)sqrt(1.0*n);
	while(l<=sqr)
	{
		temp=temp*(l-1);
		while(temp%r==0)
		{
			temp/=r;
			r++;			
		}
		if((r-l)>num)
		{
			key=l;
			num=r-l;
		}
		l++;
	}
	if(num==0)
	num++;
	printf("%d\n",num);
	for(int i=key;i<key+num;i++)
	{
		if(i!=key)
		printf("*");
		printf("%d",i);
	}
	return 0;
}
