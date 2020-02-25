#include <iostream>
using namespace std;
struct stu
{
	char name[10],id[10];
	int grade;
};
int main()
{
	int n,grade;
	char name[10],id[10];
	stu maxstu,minstu,s;
	cin>>n;
	cin>>maxstu.name;
	cin>>maxstu.id;
	cin>>maxstu.grade;
	minstu=maxstu;
	while(--n)
	{
		cin>>s.name;
		cin>>s.id;
		cin>>s.grade;
		if(grade>maxstu.grade)
		{
			maxstu=s;
		}
		else;
		if(grade<minstu.grade)
		minstu=s;
		else;
	}
	cout<<maxstu.name<<" "<<maxstu.id<<"\n"<<minstu.name<<" "<<minstu.id;
	return 0;
}
