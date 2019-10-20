#include<iostream>
using namespace std;
int main()
{
	char ch;
	int n;
	cin>>ch;
	n=ch;
	if(n>=65&&n<=90)
		cout<<1;
	else if(n>=97&&n<=122)
		cout<<0;
	else
		cout<<-1;
}
