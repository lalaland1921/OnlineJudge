#include <iostream>
using namespace std;
int main()
{
	int n,pos[100001],ans=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int digit;
		cin>>digit;
		pos[digit]=i;
	}
	int k=1;
	while(1)
	{
		int temp;
		int i=k;
		while(i<n&&pos[i]==i)
		i++;
		k=i;
		if(k==n)
		break;
		if(pos[0]!=0)
		{
			temp=pos[pos[0]];
			pos[pos[0]]=pos[0];
			pos[0]=temp;
			ans++;		
		}
		else
		{
			pos[0]=pos[k];
			pos[k]=0;
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
