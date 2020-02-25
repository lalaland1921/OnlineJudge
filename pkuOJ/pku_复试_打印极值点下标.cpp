#include <cstdio>
using namespace std;
int main()
{
	int k,a[81],flag=0;
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<k;i++)
	{
		if((a[i]<a[i-1]&&a[i]<a[i+1])||(a[i]>a[i-1]&&a[i]>a[i+1])||(i==0&&a[i]!=a[i+1])||(i==k-1&&a[i]!=a[i-1]))
		{
			if(flag==1)
			printf(" ");
			printf("%d",i);
			flag=1;
		}
	}
	return 0;
}
