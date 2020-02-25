#include <cstdio>
#include <queue>
using namespace std;
struct Node
{
	int a;
	int lchild,rchild;
};
int n;
Node post[31],in[31];
int find(int a)
{
	for(int i=0;i<n;i++)
	{
		if(in[i].a==a)
		return i;
	}
}
int findnode(int a,int b,int c,int d)
{
	if(a>b||c>d)
	return -1;
	int temp=find(post[b].a);
	in[temp].lchild=findnode(a,a+temp-c-1,c,temp-1);
	in[temp].rchild=findnode(a+temp-c+1,b,temp+1,d);
	return temp;
}
void print()
{
	int head=findnode(0,n-1,0,n-1);
	queue<int> q;
	q.push(head);
	while(!q.empty())
	{
		if(in[q.front()].lchild!=-1)
		q.push(in[q.front()].lchild);
		if(in[q.front()].rchild!=-1)
		q.push(in[q.front()].rchild);
		printf("%d",in[q.front()].a);
		q.pop();
		if(!q.empty())
		printf(" ");
	}
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&post[i].a);
	for(int i=0;i<n;i++)
	scanf("%d",&in[i].a);
	print();
	return 0;
}
