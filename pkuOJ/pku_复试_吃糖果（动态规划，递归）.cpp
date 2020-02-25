#include <cstdio>
using namespace std;
int dp[22]={0};
int Choc(int k)
{
	if(dp[k]>0)
	return dp[k];
	else
	{
		int count=0;
		if(k>1)
		count+=Choc(k-1);
		if(k>2)
		count+=Choc(k-2);
		dp[k]=count;
		return count;
	}
}
int main()
{
	dp[1]=1;
	dp[2]=2;
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		printf("%d\n",Choc(n));
	}
	return 0;
}
