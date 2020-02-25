#include <iostream>
#include <algorithm>
using namespace std;
bool cmp1(int a,int b)
{
	return a>b;
}
bool cmp2(int a,int b)
{
	return a<b;
}
int main()
{
	int nc,np,c[100010],p[100010],i=0;
	long long ans=0;
	cin>>nc;
	for(int i=0;i<nc;i++)
	{
		scanf("%d",&c[i]);
	}
	cin>>np;
	for(int i=0;i<np;i++)
	{
		scanf("%d",&p[i]);
	}
	sort(c,c+nc,cmp1);
	sort(p,p+np,cmp1);
	while(c[i]>=0&&p[i]>=0)
	{
		ans+=c[i]*p[i];
		i++;
	}
	int k1=i,k2=i;
	while(c[k1]>=0)
	{
		k1++;
	}
	while(p[k2]>=0)
	k2++;
	sort(c+k1,c+nc,cmp2);
	sort(p+k2,p+np,cmp2);
	while(k1<nc&&k2<np)
	{
		ans+=c[k1]*p[k2];
		k1++;
		k2++;
	}
	cout<<ans;
	return 0;
}
