#include <cstdio>
using namespace std;
int main()
{
	int m,n,ans,temp=1,right;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		ans=0;
		temp=1;
		right=m;
		while(m<=n)
		{
			ans+=temp;
			m=m*2+1;
			right=right*2;
			temp*=2;
		}
		if(n>=right)
		ans+=temp-(m-n);
		printf("%d\n",ans);
	}
	return 0;
}
