#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,m,a[100010];
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int i=0,j=n-1;
	while(i<j)
	{
		if(a[i]+a[j]==m)
		break;
		else if(a[i]+a[j]>m)
		j--;
		else
		i++;
	}
	if(i<j)
	cout<<a[i]<<" "<<a[j]<<endl;
	else
	cout<<"No Solution\n";
	return 0;
}
