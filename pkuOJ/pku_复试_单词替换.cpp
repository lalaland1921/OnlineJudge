#include <cstdio>
#include <string>
using namespace std;
int main()
{
	string s[101],a,b;
	int size=0;
	while(scanf("%s",s[size++].c_str())!=EOF);
	scanf("%s%s",a.c_str(),b.c_str());
	for(int i=0;i<size;i++)
	{
		if(s[i]==a)
		s[i]=b;
	}
	for(int i=0;i<size;i++)
	printf("%s",s[i].c_str());
	return 0;
}
