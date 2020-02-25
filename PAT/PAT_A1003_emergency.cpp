#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
const int nmax=510;
const int INF=10000000;
int num[nmax]={0},res[nmax],maxres[nmax]={0},G[nmax][nmax],d[nmax];
bool vis[nmax]={false};
void emerge(int n,int c1)
{
	fill(d,d+n,INF);
	d[c1]=0;
	num[c1]=1;
	maxres[c1]=res[c1];
	for(int i=0;i<n;i++)
	{
		int min=INF,k=-1;
		for(int j=1;j<=n;j++)
		{
			if(vis[j]==false&&d[j]<min)
			{
				k=j;
				min=d[j];
			}
		}
			cout<<k;
			if(k==-1)
			return;
			vis[k]=true;
			for(int j=0;j<n;j++)
			{
				if(vis[j]==false&&d[j]>d[k]+G[k][j])
				{
					num[j]=num[k];
					d[j]=d[k]+G[k][j];
					maxres[j]=maxres[k]+res[j];
				}
					if(vis[j]==false&&d[j]==d[k]+G[k][j])
					{
						num[j]+=num[k];
						if(maxres[j]<maxres[k]+res[j])
						maxres[j]=maxres[k]+res[j];
					}
					
			}
	}
}
int main()
{
	int n,m,c1,c2,a,b,l;
	fill(G[0],G[0]+nmax*nmax,INF);
	scanf("%d%d%d%d",&n,&m,&c1,&c2);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&res[i]);
	}
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d%d",&a,&b,&l);
		G[a][b]=G[b][a]=l;
	}
	emerge(n,c1);
	printf("%d %d",num[c2],maxres[c2]);
	return 0;
}
