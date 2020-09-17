// Function for Factorial
#include<iostream>
using namespace std;

int fact(int n)
{
	int ans=1;
	for(int i=2;i<=n;i++)
	{
		ans=ans*i;
	}
	return ans;
}
int main()
{
	int n;
	cout<<"Enter a Number: ";
	cin>>n;
	cout<<"Factorial: "<<fact(n)<<endl;
	return 0;
}
