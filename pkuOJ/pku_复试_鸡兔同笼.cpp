#include <cstdio>
using namespace std;
int main()
{
	int a,ans1,ans2;
	while(scanf("%d",&a))
	{
		if(a%2==1)
		ans1=ans2=0;
		else
		{
			ans1=a/4+a%4/2;
			ans2=a/2;
		}
		printf("%d %d",ans1,ans2);
	}
	return 0;
}
