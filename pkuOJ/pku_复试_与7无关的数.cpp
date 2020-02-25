#include <cstdio>
using namespace std;
bool judge(int a)
{
	if(a%7==0)
	return true;
	while(a>0)
	{
		if(a%10==7)
		return true;
		a/=10;
	}
	return false;
}
int main()
{
	int n,dp[101]={0};
	while(scanf("%d",&n)!=EOF)
	{
		int i=n;
		while(i>0)
		{
			if(dp[i]>0)
			{
				dp[n]+=dp[i];
				break;
			}
			else if(judge(i)==false)
			dp[n]+=i*i;
			i--;
		}
		printf("%d\n",dp[n]);
	}
}
