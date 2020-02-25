#include <stdio.h>
#include <algorithm>
using namespace std;
struct Node
{
	int x,y;
}node[500001];
bool cmp(Node a,Node b)
{
	if(a.y!=b.y)
	return a.y<b.y;
	else
	return a.x>b.x;
}
int main()
{
	int n,maxx;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&node[i].x,&node[i].y);
	}
	sort(node,node+n,cmp);
	printf("%d %d\n",node[n-1].x,node[n-1].y);
	maxx=node[n-1].x;
	for(int i=n-2;i>=0;i--)
	{
		if(node[i].x>maxx)
		{
			printf("%d %d\n",node[i].x,node[i].y);
			maxx=node[i].x;
		}
	}
	return 0;
}

