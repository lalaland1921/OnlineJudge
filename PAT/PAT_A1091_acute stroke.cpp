#include <cstdio>
#include <queue>
using namespace std;
struct node
{
	int p;
	bool vis;
}stroke[128][1286][60];
struct position
{
	int x,y,z;
}pos;
queue<position> po;
int add[6][3]={-1,0,0,1,0,0,0,1,0,0,-1,0,0,0,1,0,0,-1};
int m,n,l,t,ans=0;
void BFS()
{
	for(int z=0;z<l;z++)
	{
		for(int y=0;y<m;y++)
		{
			for(int x=0;x<n;x++)
			{
		int temp=0;
		if(stroke[x][y][z].vis==false&&stroke[x][y][z].p==1)
		{
			pos.x=x;
			pos.y=y;
			pos.z=z;
			po.push(pos);
			stroke[pos.x][pos.y][pos.z].vis=true;
			while(!po.empty())
			{
				pos=po.front();
				for(int i=0;i<6;i++)
			{
				if(pos.x+add[i][0]<n&&pos.x+add[i][0]>=0&&pos.y+add[i][1]<m&&pos.y+add[i][1]>=0&&pos.z+add[i][2]<l&&pos.z+add[i][2]>=0)
				{
					int newx=pos.x+add[i][0];
					int newy=pos.y+add[i][1];
					int newz=pos.z+add[i][2];
					if(stroke[newx][newy][newz].vis==false&&stroke[newx][newy][newz].p==1)
					{
						pos.x=newx;
						pos.y=newy;
						pos.z=newz;
						po.push(pos);
						stroke[pos.x][pos.y][pos.z].vis=true;					
					}
				}
				else;
			}
			po.pop();
			temp++;
			}	
		}
		if(temp>=t)
		ans+=temp;
	}
}
}
}
int main()
{
	scanf("%d%d%d%d",&m,&n,&l,&t);
	for(int z=0;z<l;z++)
	{
		for(int y=0;y<m;y++)
		{
			for(int x=0;x<n;x++)
			{
				scanf("%d",&stroke[x][y][z].p);
				stroke[x][y][z].vis=false;
			}
		}
	}
	BFS();
	printf("%d",ans);
	return 0;
}
