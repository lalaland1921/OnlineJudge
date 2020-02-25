#include <cstdio>
using namespace std;
int main()
{
	int n,age,sum;
	float ava;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&age);
		sum+=age;
	}
	ava=1.0*sum/n;
	printf("%.2f",sum);
	return 0;
}
