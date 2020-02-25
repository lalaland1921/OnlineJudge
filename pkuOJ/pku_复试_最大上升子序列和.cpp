#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int n,a[1001],dp[1001]={0},ans=0;
	while(cin>>n);
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			dp[i]=a[i];
		}
		dp[0]=a[0];
		for(int i=1;i<n;i++)
		{
			for(int j=i-1;j>=0;j--)
			{
				if(a[j]<a[i])
				dp[i]=dp[i]>(dp[j]+a[i])?dp[i]:(dp[j]+a[i]);
			}
			if(dp[i]>ans)
			ans=dp[i];
		}
		cout<<ans<<endl;
	}
	return 0;
 } 
