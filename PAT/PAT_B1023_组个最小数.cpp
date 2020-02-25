#include <iostream>
using namespace std;
int main()
{
	int num[10],digit[51]={0},sum=0;
	for(int i=0;i<10;i++)
	{
		cin>>num[i];
		sum+=num[i];
	}
	int i;
	for(i=1;i<10;i++)
	{
		if(num[i]>0)
		{
			digit[0]=i;
			num[i]--;
			break;
		}
	}
	if(i==10)
	cout<<"0";
	else
	{
		i=num[0]+1;
		int j=1;
		while(i<sum)
		{
			while(num[j]==0)
			j++;
			digit[i]=j;
			num[j]--;
			i++;
		}
		for(j=0;j<sum;j++)
		cout<<digit[j];
	}
	return 0;
}
