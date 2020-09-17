#include<iostream>
using namespace std;
int main()
{
	int n,d,count=0,k; //Number n and Digit d
	cin>>n>>d;
	while(n!=0)
	{
		k=n % 10;
		n=n/10;
		if(k == d)
		{
			count++;
		}
	}
	
	cout<<count;
	
	
}
