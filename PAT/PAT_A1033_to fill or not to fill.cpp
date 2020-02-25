#include <iostream>
#include <algorithm>
using namespace std;
struct station
{
	double p,d;
	int id;
}stt[501];
bool cmp1(station a,station b)
{
	return a.p<b.p;
}
bool cmp2(station a,station b)
{
	if(a.d!=b.d)
	return a.d<b.d;
	else
	return a.p<b.p;
}
int main()
{
	double cmax,d,davg,ans=0;
	int n;
	cin>>cmax>>d>>davg>>n;
	double dmax=cmax*davg;
	for(int i=0;i<n;i++)
	{
		cin>>stt[i].p>>stt[i].d;
	}
	sort(stt,stt+n,cmp2);
	bool flag=true;
	for(int i=0;i<n;i++)
	{
		if(i>0&&stt[i].d-stt[i-1].d>dmax)
		{
			flag=false;
			ans=stt[i-1].d+dmax;
			break;
		}
		stt[i].id=i;
	}
	if(d-stt[n-1].d>dmax&&flag==true)
	{
		flag=false;
		ans=stt[n-1].d+dmax;
	}
	if(flag==false)
	{
		cout<<"The maximum travel distance = ";
	}
	else
	{
		int j=n;
		while(d>0)
		{
			sort(stt,stt+j,cmp1);
			int i=0;
			while(d-stt[i].d>dmax&&i<j)
			i++;
			ans+=stt[i].p*(d-stt[i].d)/davg;
			j=stt[i].id;
			d=stt[i].d;
			sort(stt,stt+n,cmp2);
		}
	}
	printf("%.2f",ans);
	return 0;
}
