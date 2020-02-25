/*#include <cstdio>//动态规划 
using namepace std;
int main()
{
	int m,n,dp[11][11][11]={0};//dp[k][i][j]表示0到k中选i个数使得和为j 
	scanf("%d %d",&m,&n);
	for(int i=0;i<11;i++)
	{
		for(int j=i;j<11;j++)
		dp[1][j][i]=1;
	}
	 
}*/
#include <cstdio>
using namespace std;
int DP(int m,int n,int k)
{
	int count=0;
	if(k<=0||n<=0||m<=0)
	return 0;
	if(k==1)
	{
		if(m<=n)
		return 1;
		else
		return 0;
	}
	for(int i=1;i<=k;i++)
	count+=DP(m-i,n-1,i);
	return count;
}
int main()
{
	int n,m,count=0;
	scanf("%d %d",&m,&n);
	count=DP(m,n,m);
	printf("%d",count);
	return 0;
}
