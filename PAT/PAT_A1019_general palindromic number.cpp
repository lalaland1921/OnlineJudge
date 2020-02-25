#include <iostream>
using namespace std;
int main()
{
	int n,b;
	int a[64],k=0,flag=1;
	cin>>n>>b;
	while(n!=0)
	{
		a[k++]=n%b;
		n=n/b;
	}
	for(int i=0;i<k;i++)
	{
		if(a[i]!=a[k-1-i])
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	for(int i=k-1;i>=0;i--)
	{
		cout<<a[i];
		if(i!=0)
		cout<<" ";
	}
	return 0;
}
