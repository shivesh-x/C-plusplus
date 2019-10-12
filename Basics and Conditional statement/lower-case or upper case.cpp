// lower-case or upper case.cpp

#include<iostream>
using namspace std;
int main()
{
	char ch;
	cout<<"Enter an alphabet";
	cin>>ch;
	if( (ch>='A') && (ch<='Z')) 
		cout <<"The alphabet is in upper case"; 
	else
		if ( (ch>=' a') && (ch<=' z' ) ) 
			cout<<"The alphabet is in lower case";
		else 
			cout<<"It is not an alphabet"; 
	return 0;		
}
