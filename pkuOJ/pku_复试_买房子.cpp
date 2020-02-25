#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	int n,k;
	float up,price;
	while(scanf("%d %d",&n,&k)!=EOF)
	{
		int i=200/n;
		up=1.0*k/100;//注意加1.0，否则计算为0！！ 
		price=200*pow(1+up,i-1);
		while(i*n<price&&i<=21)
		{
			i++;
			price*=1+up;
		}
		if(i*n>=price)
		printf("%d\n",i);
		else
		printf("Impossible");
	}
	return 0;
 } 
