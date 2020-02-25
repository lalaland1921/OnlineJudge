#include <iostream>
using namespace std;
int main()
{
	int i,n,a[100001]={},max_k=0,t;
	cin>>n;
	while(n--)
	{
		cin>>i;
		cin>>t;
		a[i]+=t;
		if(a[i]>a[max_k])
		max_k=i;
	}
	cout<<max_k<<" "<<a[max_k];
	return 0;
}
