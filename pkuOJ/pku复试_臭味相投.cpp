#include <cstdio>
using namespace std;
int main()
{
	int n,m,a[201],b[201]={0};
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		if(b[a[i]]==1)
		printf("BeiJu\n");
		else
		printf("%d\n",b[a[i]]-1);
	}
	return 0;
}
