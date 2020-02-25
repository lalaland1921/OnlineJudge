#include <iostream>
using namespace std;
main()
{
	int a[54],b[54],c[54],n;
	char mp[5]={'S','H','C','D','J'};
	cin>>n;
	for(int i=0;i<54;i++)
	{
		cin>>a[i];
		b[i]=i+1;
	}
	while(n--)
	{
		for(int i=0;i<54;i++)
		{
			c[a[i]-1]=b[i];
		}
		for(int i=0;i<54;i++)
		{
			b[i]=c[i];
		}
	}
	for(int i = 0;i<54;i++)
	{
		if(c[i]%13!=0)
		cout<<mp[(c[i]-1)/13]<<c[i]%13;
		else
		cout<<mp[(c[i]-1)/13]<<13;
		if(i!=53)
		cout<<" ";
		else;
	}
}
