#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
struct Fraction
{
	ll up,down;
}temp,ans;
ll gcd(ll a,ll b)
{
	return (b==0)?a:gcd(b,a%b);
}
Fraction reduction(Fraction a)
{
	ll temp;
	temp=gcd(abs(a.down),abs(a.up));
	a.down/=temp;
	a.up/=temp;
}
Fraction add(Fraction a,Fraction b)
{
	Fraction temp;
	temp.up=a.down*b.up+a.up*b.down;
	temp.down=a.down*b.down;
	return reduction(temp);
}
void show(Fraction a)
{
	if(a.up<0)
	{
		cout<<"-";
		a.up=-1*a.up;
	}
	if(a.down==1)
	cout<<a.up;
	else if(a.up/a.down>0)
	cout<<a.up/a.down<<" ";
	cout<<a.up%a.down<<"/"<<a.down;
}
int main()
{
	int n;
	cin>>n;
	ans.up=0;ans.down=1;
	for(int i=0;i<n;i++)
	{
		scanf("%lld/%lld",&temp.up,&temp.down);
		ans=add(ans,temp);
	}
	show(ans);
	return 0;
}
