#include <cstdio>
#include <stack>
using namespace std;
const int nmax=1001;
stack<int> st;
int n,m;
bool check(int a[])
{
	bool ispop[nmax]={false};
	for(int i=1;i<=n;i++)
	{
		if(ispop[a[i]]==true)
		return false;
		if(a[i]>a[i-1])
		{
			for(int j=a[i-1]+1;j<a[i];j++)
			st.push(j);
			if(st.size()>m-1)
			return false;
			else;
		}
		else if(st.size()>0&&st.top()==a[i])
		st.pop();
		else
		return false;
		ispop[a[i]]=true;
	}
	return true;
}
int main()
{
	int k,s[nmax];
	bool ch;
	scanf("%d%d%d",&m,&n,&k);
	s[0]=0;
	for(int i=0;i<k;i++)
	{
		while(!st.empty())
		st.pop();
		for(int j=1;j<=n;j++)
		{		
			scanf("%d",&s[i]);
		}
			ch=check(s);
			if(ch==false)
			printf("NO\n");
			else
			printf("YES\n"); 
	}
	return 0;
}
