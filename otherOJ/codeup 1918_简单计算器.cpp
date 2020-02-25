#include <cstdio>
#include <stack>
#include <map>
#include <string>
#include <iostream> 
using namespace std;
stack<double> digit;
stack<char> op;
map<char,double> adv;
string str;
double calcu(double op1,double op2,char ch)
{
	if(ch=='+')
	return op1+op2;
	if(ch=='-')
	return op1-op2;
	if(ch=='*')
	return op1*op2;
	else
	return op1/op2;
}
double operate()
{
	double num,op1,op2;
	char ch;
	for(int i=0;i<str.length();)
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			num=str[i++]-'0';
			while(i<str.length()&&str[i]>='0'&&str[i]<='9')
			{
				num=num*10+str[i]-'0';
				i++;
			}
			digit.push(num);
		}
		else
		{
			while(!op.empty()&&adv[str[i]]<=adv[op.top()])
			{
				op2=digit.top();
				digit.pop();
				op1=digit.top();
				digit.pop();
				ch=op.top();
				op.pop();
				digit.push(calcu(op1,op2,ch));//
			}
			op.push(str[i]);
			i++;
		}
	}
	while(!op.empty())
	{
		op2=digit.top();
		digit.pop();
		op1=digit.top();
		digit.pop();
		ch=op.top();
		op.pop();
		digit.push(calcu(op1,op2,ch));
	}
	return digit.top();
}
int main()
{
	adv['+']=adv['-']=1;
	adv['*']=adv['/'];
	while(getline(cin,str),str!="0")
	{
		for(string::iterator it=str.end();it!=str.begin();it--)
		{
			if(*it==' ')
			str.erase(it);
		}
	}
	while(!digit.empty())
	digit.pop();
	while(!op.empty())
	op.pop();
	printf("%.2f",operate());
}
