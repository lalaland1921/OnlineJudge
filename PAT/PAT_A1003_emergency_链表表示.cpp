#include <cstdio>
#include <malloc.h>
using namespace std;
const int nmax=503;
const int IFN=1000000000;
struct ROAD
{
	int data;
	struct ROAD next;
}*city[nmax];
void Dijkstra(int c1,int c2)
{
	int count[nmax]={0},maxhands[nmax]={0},length[nmax]=;
	count[c1]=1;maxhand[c1]=hands[c1]
}
int main()
{
	int n,m,c1,c2,hands[nmax],x,y,len;
	scanf("%d%d%d%d",&n,&m,&c1,&c2);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&hands[i]);
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d%d%d",&x,&y,&len);
		*ROAD r[2]=(*ROAD)malloc(sizeof(ROAD));
		for(int i=0;i<2;i++)
		{
			r[i]->data=x;
			r[i]->next=city[y];
			city[y]=r[i]->next;
		}
	}
}
