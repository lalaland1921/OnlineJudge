#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn=40001;
const int maxk=2502;
vector<int> course[maxk];
char name[maxn][5];
bool cmp(int a,int b)
{
	return strcmp(name[a],name[b])<0;
}
int main()
{
	int n,k,num,cid;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%s%d",name[i],&num);
		for(int j=0;j<num;j++)
		{
			scanf("%d",&cid);
			course[cid].push_back(i);
		}
	}
	for(int i=1;i<=k;i++)
	{
		printf("%d %d\n",i,course[i].size());
		sort(course[i].begin(),course[i].end(),cmp);
		for(int j=0;j<course[i].size();j++)
		printf("%s\n",name[course[i][j]]);
	} 
	return 0;
}
