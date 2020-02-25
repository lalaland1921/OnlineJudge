#include <cstdio>
using namespace std;
int c,n,p[101],rank[101],ans;
int find(int k,int psum,int vsum)
{
	if(psum<=0||k>=n)
	return vsum;
	int v1=find(k+1,psum,vsum),v2=find(k+1,psum-p[k],vsum+rank[k]);
	return v1>v2?v1:v2;
}
int main()
{
	while(scanf("%d %d",&c,&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		scanf("%d %d",&p[i],&rank[i]);
		ans=find(0,c,0);
		printf("%d\n",ans);
	}
	return 0;
} 
