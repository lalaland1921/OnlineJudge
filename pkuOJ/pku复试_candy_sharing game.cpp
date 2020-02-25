#include <cstdio>
#include <vector>
using namespace std;
bool check(vector <int> v,int n)
{
	bool flag=false;
	for(int i=0;i<n-1;i++)
	{
		if(v[i]!=v[i+1])
		return true;
	}
}
int main()
{
	int n,pre,now,num=0,a;
	vector <int> v;
	while(scanf("%d",&n)!=EOF)
	{
		num=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a);
			v.push_back(a);
		}
		while(check(v,n))
		{
			for(int i=0;i<n;i++)
			{
				if(v[i]%2==1)
				v[i]++;
				if(i==0)
				pre=v[0];
				else
				{
					now=v[i];
					v[i]+=pre/2;
					pre=now;
				}
			}
			v[0]+=pre/2;
			num++;
		}
		printf("%d %d",num,v[0]);
	}
	return 0;
}
