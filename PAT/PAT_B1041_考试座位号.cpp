#include <iostream>
using namespace std;
struct stu
{
	long long id;
	int num;
};
int main()
{
	long long id;
	stu s[1000];
	int n,i,j;
	cin>>n;
	while(n--)
	{
		cin>>id>>i>>j;
		s[i-1].id=id;
		s[i-1].num=j;
	 } 
	cin>>n;
	while(n--)
	{
		cin>>i;
		cout<<s[i-1].id<<" "<<s[i-1].num<<endl;
	}
	return 0;
}
