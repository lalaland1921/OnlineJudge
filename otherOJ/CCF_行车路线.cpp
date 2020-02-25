#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
const int maxn=510;
const ll INF=10^10;
int main()
{
	int n,m,t,a,b;
	ll c;
	ll adj[maxn][maxn];
	ll d[maxn];
	d[1]=0;
	bool vis[maxn]={false};
	fill(adj[0],adj[0]+maxn*maxn,INF);
	fill(d,d+maxn,INF);
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d%d%d%lld",&t,&a,&b,&c);
		if(t==0)
		adj[a][b]=adj[b][a]=t;
		else
		adj[a][b]=adj[b][a]=t*t;
	}
	for(int i=1;i<=n;i++)
	{
		ll min=INF;
		int k=-1;
		for(int j=1;j<=n;j++)
		{
			if(vis[j]==false&&d[j]<min)
			k=j;
			min=d[j];
		}
		if(k==-1);
		else if(k==n)
		printf("%lld",d[k]);
		else
		{
			vis[k]=true;
			for(int j=1;j<=n;j++)
			{
				if(vis[j]==false&&d[j]>adj[k][j]+d[k])
				d[j]=adj[k][j]+d[k];
			}
		}
	}
}
