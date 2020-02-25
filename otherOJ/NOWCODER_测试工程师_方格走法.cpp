#include <cstdio>
using namespace std;
int Count(int x,int y)
{
	if(x==0||y==0)
	return 1;
	return Count(x-1,y)+Count(x,y-1);
}
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d\n",Count(x,y));
	return 0;
} 
