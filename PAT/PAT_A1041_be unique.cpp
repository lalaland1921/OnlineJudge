#include <iostream>
using namespace std;
int main()
{
	int n,hashtable[10002]={0},num[100001];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		hashtable[num[i]]++;
	}
	int flag=0;
	for(int i=0;i<n&&flag==0;i++)
	{
		if(hashtable[num[i]]==1)
		{
			cout<<num[i];
			flag=1;
		}
	}
	if(flag==0)
	cout<<"None";
	return 0;
} 
