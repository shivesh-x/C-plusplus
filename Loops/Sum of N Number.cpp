// Sum of N Number.cpp

#include<iostream>
using namespace std;
int main()
{
	int i,sum=0,n;                                                 // The answer can also be checked by using the mathematical formula for
	cout<<"Number till where sum is prinnted:";                     // sum of n natural number i.e. n*(n+1)/2;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"Sum:"<<sum;
}
