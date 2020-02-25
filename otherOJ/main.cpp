#include <iostream>//去库里面找 
#include "Point.h"//首先去当前工作目录找 
using namespace std;
int Point::count=0;
Point::Point(const Point &p):x(p.x),y(p.y)
{
	count++;
}
void Point::showcount()
{
	cout<<"object count ="<<count<<endl;
}

