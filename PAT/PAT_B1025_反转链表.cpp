#include <cstdio>
#include <algorithm>
using namespace std;
const int nmax=100010;
struct Node
{
	int data,next;
}node[nmax];
int main()
{
	int head,n,k,add,ad[nmax];
	scanf("%d%d%d",&head,&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&add);
		scanf("%d %d",&node[add].data,&node[add].next);
	}
	int p=head;
	int j;
	for(int i=0;i<n;i++)
	{
		ad[i]=p;
		p=node[p].next;
		if(i%k==k-1)
		{
			reverse(ad+i-k+1,ad+i+1);
		}
		if(p==-1)
		{
			j=i;
			break;
		}
	}
	for(int i=0;i<=j;i++)
	{
		printf("%05d %d ",ad[i],node[ad[i]].data);
		if(i!=n-1)
		printf("%05d\n",ad[i+1]);
		else
		printf("-1\n");
	}
	return 0;
}
