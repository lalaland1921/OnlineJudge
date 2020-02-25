#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,m,num[100001],hashtable[501]={0};
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		hashtable[num[i]]++;
	}
	sort(num,num+n);
	bool flag=false;
	for(int i=0;i<n&&flag==false&&num[i]<=m/2;i++)
	{
		if(hashtable[m-num[i]]>0)
		{
			if(num[i]==m/2&&hashtable[m-num[i]]>1||num[i]<m/2)
			{
				cout<<num[i]<<" "<<m-num[i];
				flag=true;
			}	
		}
	}
	if(flag==false)
	cout<<"No Solution";
	return 0;
}
