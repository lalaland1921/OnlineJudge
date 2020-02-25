#include <cstdio>
#include <queue>
using namespace std;
struct Node
{
	int lchild,rchild;
}node[20];
int n;
void levelorder(int h)
{
	int count=0;
	queue<int> q;
	q.push(h);
	while(!q.empty())
	{
		int temp=q.front();
		q.pop();
		printf("%d",temp);
		count++;
		if(count<n)
		printf(" ");
		else
		printf("\n");
		if(node[temp].lchild!=-1)
		q.push(node[temp].lchild);
		if(node[temp].rchild!=-1)
		q.push(node[temp].rchild);
	}
}
int count=0;
void inorder(int h)
{
	if(h==-1)
	return;
	else
	{
		inorder(node[h].lchild);
		printf("%d",h);
		count++;
		if(count<n)
		printf(" ");
		inorder(node[h].rchild);
	}
}
int main()
{
	char ch1,ch2;
	bool isvis[20]={false};
	int h;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%*c%c %c",&ch1,&ch2);
		if(ch1=='-')
		node[i].rchild=-1;
		else
		{
			node[i].rchild=ch1-'0';
			isvis[node[i].rchild]=true;
		}
		if(ch2=='-')
		node[i].lchild=-1;
		else
		{
			node[i].lchild=ch1-'0';
			isvis[node[i].lchild]=true;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(isvis[i]==false)
		{
			h=i;
			break;
		}
	}
	levelorder(h);
	inorder(h);
}
