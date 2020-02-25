#include <iostream>
using namespace std;
int main()
{
	int n;
	double a,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%lf",&a);
		ans+=a*(n-i+1)*i;
	}
	printf("%.2f",ans);
	return 0;
}
