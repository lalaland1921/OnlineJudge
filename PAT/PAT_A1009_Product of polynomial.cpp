#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,i,count=0;
	double a[1001]={},b[2001]={},c[2001]={},k;
	cin>>n;
	while(n--)
	{
		cin>>i;
		cin>>a[i];
	}
	cin>>n;
	while(n--)
	{
		cin>>i;
		cin>>k;
		for(int j=0;j<1001;j++)
		{
			c[i+j]+=a[j]*k;			
		}
	}
	for(i=0;i<1001;i++)
	{
		if(c[i]!=0)
		count++;
	}
	cout<<count;
	for(i=1000;i>=0;i--)
	{
		if(c[i]!=0)
		cout<<" "<<i<<" "<<setiosflags(ios::fixed)<<setprecision(1)<<c[i];
	}
	return 0;
} 
