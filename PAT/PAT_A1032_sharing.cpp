#include <cstdio>
const int nmax=100001;
struct Node
{
	char l;
	int Next; 
}node[nmax];
int main()
{
	int l1,l2,n,id;
	bool vis[nmax]={false};
	scanf("%d%d%d",&l1,&l2,&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&id);
		scanf("%c %d",&node[id].l,&node[id].Next);
	}
	while(l1!=-1)
	{
		vis[l1]=true;
		l1=node[l1].Next;
	}
	while(l2!=-1)
	{
		if(vis[l2]==true)
		break;
		else
		l2=node[l2].Next;
	}
	if(l2!=-1)
	printf("%05d",l2);
	else
	printf("-1");
	return 0;
}
