#include <cstdio>
using namespace std;
const int nmax=503;
const int INF=1000000000;
int adj[nmax][nmax],minlen[nmax],maxh[nmax]={0},h[nmax],path[nmax]={0};
void Dijkstra(int n,int c1)
{
	int m,vis[n]={0},l;
	minlen[c1]=0;
	path[c1]=1;
	maxh[c1]=h[c1];
	while(true)
	{
		m=INF;
		l=-1;
		for(int i=0;i<n;i++)
		{
			if(vis[i]==0&&minlen[i]<m)
			{
				m=minlen[i];
				l=i;
			}
		}
		if(l==-1)
		return;
		else
		vis[l]=1;
		for(int i=0;i<n;i++)
		{
			if(adj[l][i]+minlen[l]<minlen[i])
			{
				minlen[i]=adj[l][i]+minlen[l];
				path[i]=path[l];
				maxh[i]=maxh[l]+h[i];
			}
			else if(adj[l][i]+minlen[l]==minlen[i])
			{
				path[i]+=path[l];
				if(maxh[i]<maxh[l]+h[i])
				maxh[i]=maxh[l]+h[i];
			}
		}
	}
}
int main()
{
	int n,m,c1,c2,x,y,z;
	scanf("%d%d%d%d",&n,&m,&c1,&c2);
	for(int i=0;i<n;i++)
	scanf("%d",&h[i]);
	for(int i=0;i<n;i++)
	{
		minlen[i]=INF;
		for(int j=0;j<n;j++)
		adj[i][j]=INF;
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d%d%d",&x,&y,&z);
		adj[x][y]=adj[y][x]=z;
	}
	Dijkstra(n,c1);
	printf("%d %d",path[c2],maxh[c2]);
}
