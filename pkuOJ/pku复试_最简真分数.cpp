#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int n,a[601],key,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	sort(a,a+n);
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			key=a[i];
			while(a[i]%key!=0||a[j]%key!=0)
			key--;
			if(key==1)
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
} 
