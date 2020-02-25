#include <iostream>
#include <algorithm>
using namespace std;
struct station
{
	double p,d;
}stt[502];
bool cmp(station a,station b)
{
	if(a.d!=b.d)
	return a.d<b.d;
	else
	return a.p<b.p;
}
int main()
{
	double cmax,d,davg,ans=0;
	int n,now=0;
	cin>>cmax>>d>>davg>>n;
	double dmax=cmax*davg;
	for(int i=0;i<n;i++)
	{
		cin>>stt[i].p>>stt[i].d;
	}
	stt[n].d=d;
	stt[n].p=0;
	sort(stt,stt+n+1,cmp);
	if(stt[0].d==0)
	{
		double nowtank=0;
		while(now<n)
		{
			int k=-1;
			double pmin=100000;
			for(int i=now+1;i<n+1&&stt[i].d-stt[now].d<=dmax;i++)
			{
				if(stt[i].p<pmin)
				{
					pmin=stt[i].p;
					k=i;
				}
				if(pmin<stt[now].p)
				break;
			}
			if(k==-1)
			{
				ans=stt[now].d+dmax;
				break;
			}
			else
			{
				double need=(stt[k].d-stt[now].d)/davg;
				if(pmin<stt[now].p)
				{				
					if(need>nowtank)
					{
						ans+=(need-nowtank)*stt[now].p;
						nowtank=0;
					}
					else
					nowtank-=need;
				}
				else
				{
					ans+=(cmax-nowtank)*stt[now].p;
					nowtank=cmax-need;
				}
				now=k;
			}
		}
	}
	if(now<n)
	cout<<"The maximum travel distance = ";
	printf("%.2f",ans);
	return 0;
}
