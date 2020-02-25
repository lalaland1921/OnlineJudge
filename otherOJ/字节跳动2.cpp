#include <cstdio>
#include <iostream>
using namespace std;
int dis[21][21],n,temp=0,ans=100000;
bool vis[21]={false}; 
void DFS(int bg)
{
	vis[bg]=true;
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		if(vis[i]==false)
		{
			temp+=dis[bg][i];
			DFS(i);
			flag=true;
			temp-=dis[bg][i];
		}
	}
	if(flag==false)
	{
		temp+=dis[bg][0];
		if(temp<ans)
		ans=temp;
		temp-=dis[bg][0];
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		cin>>dis[i][j];
	}
	DFS(0);
	cout<<ans<<endl;
	return 0;
 } 
