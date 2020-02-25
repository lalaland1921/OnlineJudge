#include <cstdio>
using namespace std;
struct Node
{
	int data,next;
}node[100000];
int main()
{
	int n,head,k,id,a[100000];
	scanf("%d %d %d",&head,&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d ",&id);
		scanf("%d %d",&node[id].data,&node[id].next);
	}
	int i=0,p=head;
	while(p>=0)
	{
		if(node[p].data<0)
		a[i++]=p;
	}
	p=head;
	while(p>=0)
	{
		if(node[p].data<=k&&node[p].data>=0)
		a[i++]=p;
	}
	p=head;
	while(p>=0)
	{
		if(node[p].data>k)
		a[i++]=p;
	}
	for(int i=0;i<n;i++)
	{
		printf("%05d %d %05d\n",a[i],node[a[i]].data,node[a[i]].next);
	}
	return 0;
}
