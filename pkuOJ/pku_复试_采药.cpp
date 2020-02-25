#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int t,m,time[101],v[101],dp[1001]={0};
	while(scanf("%d %d",&t,&m)!=EOF)
	{
		for(int i=1;i<=m;i++)
		scanf("%d %d",&time[i],&v[i]);
		for(int i=1;i<=m;i++)
		{
			for(int j=t;j>=time[i];j--)
			{
				dp[j]=max(dp[j],dp[j-time[i]]+v[i]);
			}
		}
		printf("%d\n",dp[t]);
	}
	return 0;
}
