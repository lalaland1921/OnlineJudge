#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	int c,n,p[101],rank[101],dp[1001]={0};
	while(scanf("%d %d",&c,&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		scanf("%d %d",&p[i],&rank[i]);
		for(int i=0;i<n;i++)
		{
			for(int j=c;j>=p[i];j--)
			{
				dp[j]=dp[j]>(dp[j-p[i]]+rank[i])?dp[j]:(dp[j-p[i]]+rank[i]);
			}
		}
		printf("%d\n",dp[c]);
	}
	return 0;
}
