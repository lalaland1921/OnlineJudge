#include <cstdio> 
using namespace std;
int main()
{
	int c1,c2,h,m,s;
	scanf("%d%d",&c1,&c2);
	s=c2-c1;
	if(s%100<50)
	s=s/100;
	else
	s=s/100+1;
	h=s/3600;
	m=s%3600/60;
	s=s%60;
	printf("%02d:%02d:%02d\n",h,m,s);
	return 0;
}
