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
	cin.get();
	scanf("%d.%d.%d",&a,&b,&c);
	y=change(a,b,c);
	x+=y;
	cout<<x/(17*29)<<"."<<x%(17*29)/29<<"."<<x%29;
	return 0;
 } 
