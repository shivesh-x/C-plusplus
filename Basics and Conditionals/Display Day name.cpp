#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter Number of the Day: ";
    cin>>day;
    if (day == 1)
        cout<<"sun"<<endl;
    else if( day == 2)
        cout<<"mon"<<endl;
    else if( day == 3)
        cout<<"tue";
    else if( day == 4)
        cout<<"wed";
    else if( day == 5)
        cout<<"thu";
    else if( day == 6)
        cout<<"fri";
    else
        cout<<"sat";

    return 0;
}
