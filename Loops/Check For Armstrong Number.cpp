#include<iostream>
using namespace std;
int main()
{
    int n,r,num,a=0;
    cin>>n;
    num=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        a=a+(r*r*r);
    }
    if(num == a)
        cout<<"Armstrong Number";
    else
        cout<<"Not a Armstrong Number";


}
