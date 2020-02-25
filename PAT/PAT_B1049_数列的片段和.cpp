#include <iostream>
using namespace std;
int main()
{
	int n;
	double a,temp=0.0,ans=0.0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%lf",&a);
		temp+=a*(i+1);
		ans+=temp;
	}
	printf("%.2f",ans);
	return 0;
}
