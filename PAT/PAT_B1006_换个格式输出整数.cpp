#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char ch;
	int num,a[4],n=0;
	cin>>num;
	do
	{
		a[n++]=num%10;
		num=num/10;
	}while(num!=0);
	switch(n)
	{
		case 3:
			{
				for(int j=0;j<a[2];j++)
				cout<<'B';
			}
		case 2:
			{
				for(int j=0;j<a[1];j++)
				cout<<'S';
			}
		case 1:
			{
				for(int j=1;j<=a[0];j++)
				cout<<j;
			}
	}
	return 0;
}
