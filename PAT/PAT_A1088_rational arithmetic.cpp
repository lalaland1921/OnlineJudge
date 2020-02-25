#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
struct Fraction
{
	ll up,down;
}f1,f2,ans;
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
Fraction reduct(Fraction a,Fraction b)
{
	b.up*=(-1);
	return add(a,b);
}
Fraction multi(Fraction a,Fraction b)
{
	Fraction temp;
	temp.down=a.down*b.down;
	temp.up==a.up*b.up;
	return reduction(temp);
}
Fraction divide(Fraction a,Fraction b)
{
	Fraction temp;
	temp.down=a.down*b.up;
	temp.up=a.up*b.down;
	if(temp.down<0)
	{
		temp.down*=-1;
		temp.up*=-1;
	}
	return reduction(temp);
}
void show(Fraction a)
{
	a=reduction(a);
	bool flag=true;
	if(a.up<0)
	{
		cout<<"(-";
		a.up=-1*a.up;
		flag=false;
	}
	if(a.down==1)
	cout<<a.up;
	else if(a.up/a.down>0)
	cout<<a.up/a.down<<" ";
	cout<<a.up%a.down<<"/"<<a.down;
	if(flag==false)
	cout<<")";
}
int main()
{
	scanf("%lld/%lld %lld/%lld",&f1.up,&f1.down,&f2.up,&f2.down);
	show(f1);
	cout<<" + ";
	show(f2);
	cout<<" = ";
	show(add(f1,f2));
	cout<<"\n";
	show(f1);
	cout<<" + ";
	show(f2);
	cout<<" = ";
	show(reduct(f1,f2));
	cout<<"\n";
	show(f1);
	cout<<" + ";
	show(f2);
	cout<<" = ";
	show(multi(f1,f2));
	cout<<"\n";
	show(f1);
	cout<<" + ";
	show(f2);
	cout<<" = ";
	show(divide(f1,f2));
	cout<<"\n";
}
