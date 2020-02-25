#include <iostream>
using namespace std;
int main()
{
	int n,grade[1002]={0},team_id,p_id,g,k=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d-%d %d",&team_id,&p_id,&g);
		grade[team_id]+=g;
		if(grade[team_id]>grade[k])
		k=team_id;
	}
	cout<<k<<" "<<grade[k];
	return 0;
}
