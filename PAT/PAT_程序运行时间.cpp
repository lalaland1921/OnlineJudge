#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
int c1,c2,t,h,m,s;
cin>>c1>>c2;
t=round(1.0*(c2-c1)/100);
cout<<t<<endl;
t=(c2-c1);
    if(t%100<50)
        t=t/100;
    else 
        t=t/100+1;
h=t/3600;
m=(t%3600)/60;
s=t%60;
cout<<h<<":"<<m<<":"<<s;
return 0;
}
