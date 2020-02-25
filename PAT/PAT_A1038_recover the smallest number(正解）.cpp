#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool cmp(string a,string b)
{
	return a+b<b+a;
}
int main()
{
	int n;
	string seg[10010];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>seg[i];
	}
	sort(seg,seg+n,cmp);
	string ans;
	for(int i=0;i<n;i++)
	{
		ans+=seg[i];
	}
	while(ans.size()!=0&&ans[0]=='0')
	ans.erase(ans.begin());//È¥³ýÇ°µ¼0
	if(ans.size()==0)
	cout<<"0";
	else
	cout<<ans; 
	return 0;
}
