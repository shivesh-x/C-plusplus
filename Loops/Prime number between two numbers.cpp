// Prime number between two numbers 
#include<iostream>
using namespace std;
int main()
{
	int n,a,i,j,flag=0;
	cin>>a>>n;
	for(i=a;i<=n;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0&&n!=1)
		{
			cout<<i;
		}
	}
	
}
