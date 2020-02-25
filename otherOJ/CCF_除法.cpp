#include <cstdio>
using namespace std;
const int nmax=100010;
int a[nmax];
void opt1(int l,int r,int v)
{
	for(int i=l;i<=r;i++)
	{
		if(a[i]%v==0)
		a[i]/=v;
	}
}
void opt2(int l,int r)
{
	long long sum=0;
	for(int i=l;i<=r;i++)
	sum+=(long long)a[i];
	printf("%lld",sum);
}
int main()
{
	int n,m,opt,r,l,v;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(int i=1;i<=m;i++)
	{
		scanf("%d",&opt);
		if(opt==1)
		{
			scanf("%d%d%d",&l,&r,&v);
			opt1(l,r,v);
		}
		else
		{
			scanf("d%d",&l,&r);
			opt2(l,r);
		}
	}
	return 0;
}
