#include <iostream>
using namespace std;
struct p
{
	char name[6];
	int date;
}temp,ans_max,ans_min;
int change(int y,int m,int d)
{
	return y*10000+m*100+d;
}
int main()
{
	int y,m,d;
	ans_max.date=20140906;
	ans_min.date=18140906;
	int n,count=0;
	cin>>n;
	while(n--)
	{
		cin>>temp.name>>y;
		cin.get();
		cin>>m;
		cin.get();
		cin>>d;
		temp.date=change(y,m,d);
		if(temp.date>=18140906&&temp.date<=20140906)
		{
			count++;
			if(temp.date<ans_max.date)
			ans_max=temp;
			else;
			if(temp.date>ans_min.date)
			ans_min=temp;
			else;
		}
		else;
	}
	cout<<n<<" "<<ans_max.name<<" "<<ans_min.name<<endl;
	return 0;
 } 
