#include <cstdio>
#include <algorithm>
using namespace std;
const int nmax=100001;
struct Node 
{
	int address,key,next,rank;
	bool in,remove;
}node[nmax];
bool cmp(Node a,Node b)
{
	if(a.in==0||b.in==0)
	return a.in>b.in;
	else if(a.remove!=b.remove)
	return a.remove<b.remove;
	else
	return a.rank<b.rank;
}
int main()
{
	for(int i=0;i<nmax;i++)
	{
		node[i].in=node[i].remove=false;
	}
	int head,n,id;
	bool vis[10001]={false};
	scanf("%d%d",&head,&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&id);
		node[id].address=id;
		scanf("%d%d",&node[id].key,&node[id].next);
	}
	int count=0;
	while(head!=-1)
	{
		int a=abs(node[head].key);
		if(vis[a]==true)
		node[head].remove=true;
		else
		vis[a]=true;
		node[head].in=true;
		node[head].rank=count;
		head=node[head].next;
		count++;
	}
	sort(node,node+nmax,cmp);
	for(int i=0;i<count;i++)
	{
		printf("%05d %d ",node[i].address,node[i].key);
		if(node[i].remove==false&&node[i+1].remove==true||i==count-1)
		printf("-1\n");
		else
		printf("%05d\n",node[i+1].address);		
	}
	return 0;
}
