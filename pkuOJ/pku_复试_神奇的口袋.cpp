#include <cstdio>
using namespace std;
int a[21];
int n;
int DP(int k,int sum)
{
	if(sum==0)
	return 1;
	if(k==n||sum<0)
	return 0;
	return DP(k+1,sum)+DP(k+1,sum-a[k]);
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("%d\n",DP(0,40));
	return 0;
}
