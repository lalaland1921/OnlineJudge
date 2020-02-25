#include <iostream>
using namespace std;
main()
{
	int a[100],m,n;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[(i+m)%n];
	}
	for(int i=0;i<n-1;i++)
	{
		cout<<a[i]<<" "; 
	}
	cout<<a[n-1];
	return 0;
}
