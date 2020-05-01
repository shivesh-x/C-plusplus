#include<iostream>
using namespace std;
int main()
{
    int m1,m2,m3,total;
    float average;
    cout<<"Enter the Marks in three subjects: ";
    cin>>m1>>m2>m3;
    total= m1+m2+m3;
    average=(total)/3;
    if( average >= 60)
        cout<<'A';
    else if( average >= 35 && average < 60)
        cout<<'B';
    else
        cout<<'C';
    
    return 0;
}
