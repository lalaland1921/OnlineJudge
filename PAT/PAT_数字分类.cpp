#include <iostream>
#include <iomanip>
using namespace std;
main()
{
	int n,a[1000],a1=0,a2=0,a3=0,a5=0,c1=0,c2=0,c3=0,c4=0,c5=0;
	float a4=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		switch(a[i]%5)
		{
		case 0:
			{
			if(a[i]%2==0)
				{
					c1++;
					a1+=a[i];
				}
				else;
			} break;
		case 1:
			{
				c2++;
				if(c2%2==0)
				a2=a2-a[i];
				else
				a2=a2+a[i];
			}break;
		case 2:
		{
			c3++;
			a3++;
		}
		break;
		case 3:
		{
			a4+=a[i];
			c4++;
		}break;
		case 4:{
			c5++;
			if(a[i]>a5)
			a5=a[i];	
		}break;
	}
	}
	if(c1!=0)
	cout<<a1<<" ";
	else
	cout<<"N ";
	if(c2!=0)
	cout<<a2<<" ";
	else
	cout<<"N ";
	if(c3!=0)
	cout<<a3<<" ";
	else
	cout<<"N ";
	if(c4!=0)
	cout<<setprecision(1)<<1.0*a4/c4<<" ";
	else
	cout<<"N ";
	if(c5!=0)
	cout<<a5;
	else
	cout<<"N";
	return 0;
 } 

