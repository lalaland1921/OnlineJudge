#include <iostream>//ȥ�������� 
#include "Point.h"//����ȥ��ǰ����Ŀ¼�� 
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

