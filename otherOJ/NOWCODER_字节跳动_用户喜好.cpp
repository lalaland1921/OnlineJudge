#include <cstdio>
#include <cstring> 
using namespace std;
int main()
{
	int n,q,pre[300001],c1,c2,a,ans;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	scanf("%d",&pre[i]);
	scanf("%d",&q);
	for(int i=1;i<=q;i++)
	{
		scanf("%d %d %d",&c1,&c2,&a);
		ans=0;
		for(int j=c1;j<=c2;j++)
		{
			if(pre[j]==a)
			ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
} 
