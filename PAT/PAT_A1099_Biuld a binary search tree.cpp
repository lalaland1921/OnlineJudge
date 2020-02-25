#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
const int nmax=110;
struct Node
{
	int weight,rightchild,leftchild;
}node[nmax];
int order[nmax],c=0;
queue<int> q;
void inorder(int index)
{
	if(index==-1)
	return;
	inorder(node[index].leftchild);
	order[c++]=index;
	inorder(node[index].rightchild);
}
void levelorder()
{
	int f;
	c=0;
	q.push(0);
	printf("%d",node[0].weight);
	while(!q.empty())
	{
		f=q.front();
		q.pop();
		if(node[f].leftchild!=-1)
		q.push(node[f].leftchild);
		if(node[f].rightchild!=-1)
		q.push(node[f].rightchild);
		if(!q.empty())
		printf(" %d",node[q.front()].weight);
	}
}
int main()
{
	int n,weight[nmax];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&node[i].leftchild,&node[i].rightchild);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&weight[i]);
	}
	sort(weight,weight+n);
	inorder(0);
	for(int i=0;i<n;i++)
	{
		node[order[i]].weight=weight[i];
	}
	levelorder();
	return 0;
}
