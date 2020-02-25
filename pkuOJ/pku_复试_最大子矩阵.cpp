#include <cstdio>
using namespace std;
int main()
{
	int n,a[101][101],dp,sum[101][101]={0},ans=-10000;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				scanf("%d",&a[i][j]);
				sum[i][j]=sum[i][j-1]+a[i][j];
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=i;j<=n;j++)
			{
				dp=0;
				for(int k=1;k<=n;k++)
				{
					if(dp<0)
					dp=0;
					dp+=sum[k][j]-sum[k][i-1];
					if(dp>ans)
					ans=dp;
				}
			}
		}
		printf("%d\n",ans);
	}
}
