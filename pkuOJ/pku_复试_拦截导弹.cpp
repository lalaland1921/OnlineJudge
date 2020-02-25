#include <cstdio>
using namespace std;
int main()
{
	int k,a[30],ans=0,dp[30]={0};
	dp[0]=1;
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	scanf("%d",&a[i]);
	for(int i=1;i<k;i++)
	{
		for(int j=i-1;j>=0;j--)
		{
			if(a[j]>=a[i])
			dp[i]=dp[i]>(dp[j]+1)?dp[i]:(dp[j]+1);
		}
		if(dp[i]>ans)
		ans=dp[i];
	}
	printf("%d\n",ans);
	return 0;
 } 
