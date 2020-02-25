#include <cstdio>
#include <algorithm>
using namespace std;
const int nmax=1010;
int n,inorder[nmax],CBT[nmax],index=0;
void traversal(int a)
{
	if(a>n)
	return;
	else
	{
		traversal(a*2);
		CBT[a]=inorder[index++];
		traversal(a*2+1);
	}
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&inorder[i]);
	}
	sort(inorder,inorder+n);
	traversal(1);
	for(int i=1;i<=n;i++)
	{
		printf("%d",CBT[i]);
		if(i<n)
		printf(" ");
	}
	return 0;
}
