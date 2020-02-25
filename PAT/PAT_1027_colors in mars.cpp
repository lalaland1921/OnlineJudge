#include <iostream>
using namespace std;
int main()
{
	int x,a[7],i=0;
	char ch;
	cin>>x;
	do
	{
		a[i++]=x%13;
		x/=13;
	}while(x);
	cin.get();
	cin>>x;
	do
	{
		a[i++]=x%13;
		x/=13;
	}while(x);
	cin.get();
	cin>>x;
	do
	{
		a[i++]=x%13;
		x/=13;
	}while(x);
	cout<<"#";
	for(int i=0;i<3;i++)
	{
		if(a[2*i+1]<10)
		{
			ch='0'+a[2*i+1];
			cout<<ch;
		}
		else
		{
			ch='A'+a[2*i+1]-10;
			cout<<ch;
		}
		if(a[2*i]<10)
		{
			ch='0'+a[2*i];
			cout<<ch;
		}
		else
		{
			ch='A'+a[2*i]-10;
			cout<<ch;
		}
	}
	return 0;
}
