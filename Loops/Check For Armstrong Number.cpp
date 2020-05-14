#include<iostream>
using namespace std;
int main()
{
    int n,r,num,sum=0;
    cin>>n;
    num=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+(r*r*r);
    }
    if(sum == num)
        cout<<"Armstrong Number";
    else
        cout<<"Not a Armstrong Number";


}
