#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	unsigned short a,b;
	while(cin>>a>>b)
	{
		for(int i=0;i<16;i++)
		{
			if(a==b)
			{
				cout<<"YES"<<endl;
				break;
			} 
			else
			a=a<<1|(a>>15);
			if(i==15)
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
