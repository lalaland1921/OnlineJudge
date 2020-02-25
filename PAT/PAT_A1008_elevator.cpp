#include <iostream>
using namespace std;
int main()
{
	int n,a,last=0,ans=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a>last)
		ans+=6*(a-last);
		else
		ans+=4*(last-a);
		ans+=5;
		last=a;
	}
	cout<<ans;
	return 0;
}
