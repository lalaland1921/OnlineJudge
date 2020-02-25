#include <cstdio>
#include <algorithm>
using namespace std;
const int nmax=1010;
struct Node
{
	int data,lchild,rchild;
}levelorder[nmax];
int inorder[nmax],n,count=0;
void creat(int a)
{
	if(a*2<=n)
	{
		levelorder[a].lchild=a*2;
		creat(a*2);
	}
	else
	levelorder[a].lchild=-1;
	if(a*2+1<=n)
	{
		levelorder[a].rchild=a*2+1;
		creat(a*2+1);
	}
	else
	levelorder[a].rchild=-1;
}
void traversal(int a)
{
	if(a==-1)
	return;
	traversal(levelorder[a].lchild);
	levelorder[a].data=inorder[count++];
	traversal(levelorder[a].rchild);
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&inorder[i]);
	sort(inorder,inorder+n);
	traversal(1);
	for(int i=1;i<=n;i++)
	{
		printf("%d",levelorder[i]);
		if(i<n)
		printf(" ");
	}
	return 0;
}

