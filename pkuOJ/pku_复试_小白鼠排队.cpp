#include <cstdio>
#include <algorithm>
using namespace std;
struct rat
{
	int weight;
	char color[10];
}r[100];
bool cmp(rat a,rat b)
{
	return a.weight>b.weight;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d %s",&r[i].weight,&r[i].color);
	sort(r,r+n,cmp);
	for(int i=0;i<n;i++)
	printf("%s\n",r[i].color);
	return 0;
}
