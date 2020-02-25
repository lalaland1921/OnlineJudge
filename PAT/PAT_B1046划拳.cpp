#include <cstdio>
using namespace std;
int main()
{
	int n,ans1=0,ans2=0,a1,b1,a2,b2;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d %d",&a1,&b1,&a2,&b2);
		if(b1!=b2)
		{
			if(b1==a1+a2)
			ans2++;
			if(b2==a1+a2)
			ans1++;
		}
	}
	printf("%d %d",ans1,ans2);
	return 0;
}
