#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int n,h,e=2,sum=0;
	double temp,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>h;
		sum=sum*2+h;
		temp=1.0*sum/e;
		if(temp>ans)
		ans=temp;
		e*=2;
	}
	if(ans>(int)ans)
	ans=(int)ans+1;
	else
	ans=(int)ans;
	cout<<ans<<endl;
	return 0;
}
