#include <iostream>
using namespace std;
int change(int a,int b,int c)
{
	return a*17*29+b*29+c;
}
int main()
{
	int a,b,c,x,y;
	scanf("%d.%d.%d",&a,&b,&c);
	x=change(a,b,c);
	scanf("%d.%d.%d",&a,&b,&c);
	y=change(a,b,c);
	y-=x;
	if(y<0)
	{
		cout<<"-";
		y=-y;
	}
	else;
	cout<<y/(17*29)<<"."<<(y%(17*29))/29<<"."<<y%(17*29)%29;
	return 0;
}
  
	
