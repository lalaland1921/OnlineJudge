#include <iostream>
using namespace std;
int main()
{
	int a,b,sum,str[8],count=0;
	cin>>a>>b;
	sum=a+b;
	if(sum<0)
	{
		cout<<"-";
		sum=-sum;
	}
	else;
	do
	{
		str[count++]=sum%10;
		sum=sum/10;
	}while(sum>0);
	for(int i=count-1;i>=0;i--)
	{
		cout<<str[i];
		if(i!=0&&i%3==0)
		cout<<",";
	}
	return 0;
}
