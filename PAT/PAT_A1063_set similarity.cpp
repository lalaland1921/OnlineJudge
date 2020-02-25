#include <cstdio>
#include <set>
using namespace std;
const int nmax=51;
set<int> st[nmax];
void cmp(int a,int b)
{
	int c=0;
	for(set<int>::iterator it=st[a].begin();it!=st[a].end();it++)
	{
		if(st[b].find(*it)!=st[b].end())
		c++;
	}
	double ans=1.0*c/(st[a].size()+st[b].size()-c);
	printf("%.1f%%\n",ans*100.0);
}
int main()
{
	int n,m,d;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&m);
		for(int j=0;j<m;j++)
		{
			scanf("%d",&d);
			st[i].insert(d);
		 } 
	}
	int k,a,b;
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d %d",&a,&b);
		cmp(a,b);
	}
	return 0;
}
