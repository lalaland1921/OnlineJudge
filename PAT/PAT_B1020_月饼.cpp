#include <iostream>
#include <algorithm>
using namespace std; 
struct moon_cake
{
	float ku,shou,price;
}cake[1001];
bool cmp(moon_cake a,moon_cake b)
{
	return a.price>b.price;
}
int main()
{
	int n,d;
	float sum=0.0;
	cin>>n>>d;
	for(int i=0;i<n;i++)
	cin>>cake[i].ku;
	for(int i=0;i<n;i++)
	{
		cin>>cake[i].shou;
		cake[i].price=1.0*cake[i].shou/cake[i].ku;
	}
	sort(cake,cake+n,cmp);
	int i=0;
	while(d>0&&i<n)
	{
		if(d>cake[i].ku)
		{
			d-=cake[i].ku;
			sum+=cake[i].shou;
			i++;
		}
		else
		{
			sum+=cake[i].price*d;
			d=0;
		}
	}
	printf("%.2f\n",sum);
	return 0;
} 
