#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,i,count;
	double a[1001]={},b;
	cin>>n;
	count=n;
	while(n--)
	{
		cin>>i;
		cin>>a[i];
	}
	cin>>n;
	count+=n;
	while(n--)
	{
		cin>>i>>b;
		if(a[i]!=0)
		count--;
		a[i]+=b;
		if(a[i]==0)
		count--;
	}
	cout<<count;
	for(int i=1000;i>=0;i--)
	{
		if(a[i]!=0)		
		cout<<" "<<i<<" "<<setiosflags(ios::fixed)<<setprecision(1)<<a[i];
	}
	return 0;
}
