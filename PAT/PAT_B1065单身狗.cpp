#include <cstdio>
#include <algorithm>
using namespace std;
struct Partnel
{
	int p;
	bool vis;
}par[100001];
int main()
{
	int n,m,a[10001],b[10001],p1,p2,q;
	scanf("%d",&n);
	for(int i=0;i<100001;i++)
	{
		par[i].vis=false;
		par[i].p=-1;
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&p1,&p2);
		par[p1].p=p2;
		par[p2].p=p1;
	}
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
		par[a[i]].vis=true;
	}
	int j=0;
	for(int i=0;i<m;i++)
	{
		if(par[a[i]].p>=0&&par[par[a[i]].p].vis==true);
		else
		b[j++]=a[i];
	}
	sort(b,b+j);
	printf("%d\n",j);
	for(int i=0;i<j;i++)
	{
		if(i!=0)
		printf(" ");
		printf("%05d",b[i]);
	}
	return 0;
}
