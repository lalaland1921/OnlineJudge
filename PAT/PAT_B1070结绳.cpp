#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(int a,int b)
{
	return a>b; 
}
int main()
{
	int n;
	float a,b,c;
	vector<float> v;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%f",&a);
		v.push_back(a);
	}
	sort(v.begin(),v.end(),cmp);
	while(v.size()>1)
	{
		a=v.back();
		v.pop_back();
		b=v.back();
		v.pop_back();
		c=a/2+b/2;
		v.push_back(c);
	}
	printf("%d",(int)(v.front()));
}
