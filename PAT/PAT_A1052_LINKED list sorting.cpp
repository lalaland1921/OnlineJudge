#include <cstdio>
#include <algorithm>
using namespace std;
const int nmax=100001;
struct Node
{
	int address,key,next;
	bool in,show;
}node[nmax];
void init()
{
	for(int i=0;i<nmax;i++)
	{
		node[i].in=node[i].show=false;
	}
}
bool cmp(Node a,Node b)
{
	if(a.in==0||b.in==0)
	return a.in>b.in;
	else
	return a.key<b.key;
}
int main()
{
	int n,head,id;
	scanf("%d%d",&n,&head);
	init();
	for(int i=0;i<n;i++)
	{
		scanf("%d",&id);
		node[id].address=id;
		scanf("%d%d",&node[id].key,&node[id].next);
		node[id].show=true;
	}
	while(node[head].show==true&&node[head].address!=-1)
	{
		node[head].in=true;
		head=node[head].next;
	}
	sort(node,node+nmax,cmp);
	n=0;
	while(node[n].in==true)
	n++;
	if(n>0)
	{
		printf("%d %d\n",n,node[0].address);
		for(int i=0;i<n-1;i++)
		printf("%05d %d %05d\n",node[i].address,node[i].key,node[i+1].address);
		printf("%05d %d -1\n",node[n-1].address,node[n-1].key);
	}
	else
	printf("0 -1\n");
	return 0;
}
