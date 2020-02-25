#include <cstdio>
const int nmax=21,mmax=11,kmax=1001;
int main()
{
	int n,m,k,q,time[kmax],cust[kmax],que[kmax],t=0,now=0,r=1,l=0;
	struct Window
	{
		int poptime,endtime,custque[mmax];
	}win[nmax];
	scanf("%d %d %d %d",&n,&m,&k,&q);
	for(int i=0;i<k;i++)
	{
		scanf("%d",&time[i]);
	}
	for(int i=0;i<q;i++)
	scanf("%d",&que[i]);
	int now=0,i;
	for(i=0;i<n&&i<k;i++)
	{
		cust[i]=win[i].poptime=win[i].endtime=time[i];
		win[i].custque[0]=i;
	}
	while(i<k&&r<n)
	{
		win[r].custque[l]=i;
		win[r].endtime+=time[i];
		i++;
		r=i/m;
		l=i%m;
	}
	while(i<=540)
	{
		
	}
}
