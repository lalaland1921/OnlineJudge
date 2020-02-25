#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	int isprime[100010]={0};
	int i=2;
	while(i<=n)
	{
		int j=2;
		while(i*j<=n)
		{
			isprime[i*j]=1;
			j++;
		}
		while(++i<=n&&isprime[i]==1);
	}
	for(int i=2;i<n-1;i++)
	{
		if(isprime[i]==0&&isprime[i+2]==0)
		ans++;
	}
	printf("%d",ans);
	return 0;
}
