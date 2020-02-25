#include <iostream>
using namespace std;
struct stu
{
	char name[11],id[11];
	int grade;
}temp,female,male;
int main()
{
	int n;
	char gender;
	female.grade=-1;
	male.grade=101;
	cin>>n;
	while(n--)
	{
		cin>>temp.name>>gender>>temp.id>>temp.grade;
		if(gender=='F')
		{
			if(temp.grade>female.grade)
			female=temp;
			else;
		}
		else
		{
			if(temp.grade<male.grade)
			male=temp;
		}
	}
	if(female.grade==-1)
	cout<<"Absent"<<endl;
	else
	cout<<female.name<<" "<<female.id<<endl;
	if(male.grade!=101)
	cout<<male.name<<" "<<male.id<<endl;
	else
	cout<<"Absent"<<endl;
	if(female.grade!=-1&&male.grade!=101)
	{
		cout<<female.grade-male.grade<<endl;
	}	
	else
	cout<<"NA"<<endl;
	return 0;
}
