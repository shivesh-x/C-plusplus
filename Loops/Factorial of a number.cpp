//factorial of a number
#include<iostream>
using namespace std;
int main()
{
    int n,i,fact=1;
    cin>>n;
    if(n==0)
    {
        fact=1;
    }
    else
    {
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    }

    cout<<"Factorial of "<<n<<" is:"<<fact;

}
