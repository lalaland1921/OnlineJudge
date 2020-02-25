#include <cstdio>
using namespace std;
int main()
{
	int x,y;
	while(scanf("%d %d",&x,&y)!=EOF)
	{
		while(x!=y)
		{
			if(x>y)
			x/=2;
			else
			y/=2;
		}
		printf("%d",x);
	}
	return 0;
}
