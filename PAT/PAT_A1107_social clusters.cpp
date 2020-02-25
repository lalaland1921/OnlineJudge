#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
const int nmax=1010;
vector<int> h[nmax];
int n,father[nmax],count[nmax],ans[nmax]={0};
bool cmp(int a,int b)
{
	return a>b;
}
int findroot(int x)
{
	int a=x;
	while(x!=father[x])
	x=father[x];
	while(a!=father[a])
	{
		int z=father[a];
		father[a]=x;
		a=z;
	}
	return x;
}
void init()
{
	for(int i=1;i<=n;i++)
	father[i]=i;
}
void uni()
{
	for(int i=1;i<=1000;i++)
	{
		if(h[i].size()>1)
		{
			int r0=findroot(h[i][0]),r;
			for(int j=1;j<h[i].size();j++)
			{
				r=findroot(h[i][j]);
				if(r0!=r)
				father[r]=r0;
			}
		}
	}
}
void answer()
{
	for(int i=1;i<=n;i++)
	{
		ans[findroot(i)]++;
	}
}
int main()
{
	int num,hi;
	scanf("%d",&n);
	init();
	for(int i=1;i<=n;i++)
	{
		scanf("%d:",&num);
		for(int j=0;j<num;j++)
		{
			scanf("%d",&hi);
			h[hi].push_back(i);
		}
	}
	uni();
	answer();
	sort(ans,ans+n,cmp);
	int k=0;
	while(ans[k]>0)
	k++;
	printf("%d\n",k);
	for(int i=0;i<n&&ans[i]>0;i++)
	{
		if(i>0)
		printf(" ");
		printf("%d",ans[i]);
	}
	return 0;
}
