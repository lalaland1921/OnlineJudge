#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,a[100010],maxnum[100010]={0},b[100010],ans[100010],count=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i>0)
		maxnum[i]=maxnum[i-1];
		if(maxnum[i]<a[i])
		maxnum[i]=a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	for(int i=0;i<n;i++)
	{
		if(b[i]==a[i]&&maxnum[i]==b[i])
		{
			ans[count]=b[i];
			count++;
		}
	}
	cout<<count<<endl;
	for(int i=0;i<count;i++)
	{
		printf("%d",ans[i]);
		if(i!=count-1)
		cout<<" ";
	}
	cout<<"\n";
	return 0;
}
