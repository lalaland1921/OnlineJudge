#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
const int nmax=26*26*260;
int idhash(char name[])
{
	int id=0;
	for(int i=0;i<3;i++)
	{
		id=id*10+name[i]-'A';
	}
	id=id*10+name[3]-'0';
	return id;
}
vector<int> course[nmax];
int main()
{
	int n,k,num,cid;
	char name[5];
	scanf("%d%d",&n,&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d%d",&cid,&num);
		while(num--)
		{
			scanf("%s",name);
			course[idhash(name)].push_back(cid);
		}
	}
	for(int i=0;i<n;i++)
	{
		scanf("%s",name);
		int id=idhash(name);
		printf("%s %d",name,course[id].size());
		sort(course[id].begin(),course[id].end());
		for(int j=0;j<course[id].size();j++)
		printf(" %d",*(course[id].begin()+j));
		printf("\n");
	}
	return 0;
} 
