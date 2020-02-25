#include <iostream>
#include <string>
using namespace std;
string change(string str,int n,int& k)
{
	if(str[0]==0)
	{
		if(str.find(".")!=string::npos)
		{
			k=2;
		while(k<str.length()&&str[k]=='0')
		k++;
		str.erase(str.begin(),str.begin()+k);
		str.erase(str.begin()+n,str.end());
		k=-1*(k-2); 
		}
		else
		k=0;
	}
	else
	{
		if(str.find(".")!=string::npos)
		{
			k=str.find(".");
			str.erase(str.begin()+k);
		}
		else
		k=str.length();
		str.erase(str.begin()+n,str.end());
	}
	while(str.length()<n)
	str.insert(str.length(),"0");
	str.insert(0,"0.");
	return str;
}
int main()
{
	string str1,str2;
	int n,k1,k2;
	cin>>n>>str1>>str2;
	str1=change(str1,n,k1);
	str2=change(str2,n,k2);
	if(str1==str2&&k1==k2)
	{
		cout<<"YES "<<str1<<"*10^"<<k1<<endl;
	}
	else
	cout<<"NO "<<str1<<"*10^"<<k1<<" "<<str2<<"*10^"<<k2<<endl; 
	return 0;
}

