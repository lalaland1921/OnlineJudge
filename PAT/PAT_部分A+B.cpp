#include <iostream>
using namespace std;
int main()
{
  long long A,B,PA=0,PB=0;
  int DA,DB;
  cin>>A>>DA>>B>>DB;
  while(A>0)
  {
    if(A%10==DA)
    {
      PA=PA*10+DA;
    }
    A=A/10;
  }
   while(B>0)
  {
    if(B%10==DA)
    {
      PB=PB*10+DB;
    }
    B=B/10;
  }
  cout<<PA+PB<<endl;
  return 0;
}
