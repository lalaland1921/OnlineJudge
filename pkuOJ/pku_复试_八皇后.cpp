#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
vector<int> ans;
int c[9];
void fun(int row)
{
	if(row==9)
	{
		int temp=0;
		for(int i=1;i<=8;i++)
		temp=temp*10+c[i];
		ans.push_back(temp);
	}
	else
	{
		for(int i=1;i<=8;i++)
		{
			c[row]=i;
			bool flag=true;
			for(int j=1;j<row;j++)
			{
				if(c[j]==i||abs(i-c[j])==row-j)
				{
					flag=false;
					break;
				}
			}
			if(flag==true)
			fun(row+1);
		}
	}
}
int main()
{
	int b;
	fun(1);
	sort(ans.begin(),ans.end());
	while(scanf("%d",&b))
	{
		printf("%d\n",ans[b-1]);
	}
	return 0;
}
