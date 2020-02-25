#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int nc,np,c[100010],p[100010];
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
	sort(c,c+nc);//从小到大排列 
	sort(p,p+np);
	for(int i=0;i<nc&&i<np&&c[i]<0&&p[i]<0;i++)
	{
		ans+=c[i]*p[i];
	}
	for(int i=nc-1,j=np-1;i>=0&&j>=0&&c[i]>0&&p[j]>0;i--,j--)
	ans+=c[i]*p[i];
	cout<<ans;
	return 0;
}
