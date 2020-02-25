#include <cstdio>
#include <algorithm>
using namespace std;
void Print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(i!=0)
		printf(" "); 
		printf("%d",a[i]);
	}
}
int main()
{
	int a1[101],a2[101],a3[101],n,k;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a1[i]);
		a3[i]=a1[i];
	}
	for(int i=0;i<n;i++)
	scanf("%d",&a2[i]);
	for(k=1;k<=n;k++)
	{
		sort(a3,a3+k);
		if(equal(a3,a3+n,a2)&&k<n)
		{
			printf("Insertion Sort\n");
			sort(a3,a3+k+1);
			Print(a3,n);
			return 0;
		}
	}
	k=1;
	while(true)
	{
		for(int i=0;i<n;i+=k)
		sort(a1+i,a1+(i+k<n?i+k:n));
		k*=2;
		if(equal(a1,a1+n,a2)&&k<=n)
		{
			printf("Merge Sort\n");
			for(int i=0;i<n;i+=k)
			sort(a1+i,a1+(i+k<n?i+k:n));
			Print(a1,n);
			return 0;
		}	
	}
}
