// Prime number between two numbers with t (no. of test cases)
#include<iostream>
using namespace std;
int main()
{
    int N, i,a, j, flag, n,t;
    cin>>t;
    
while(t--)
{
	cin >>a>>N;
    for(i = a; i <= N; i++){
        flag = 0;
        for(j = 2; j <= i/2; j++)
		{
            if(i % j == 0)
			 {
                 flag = 1;
                 break;
             }
        }
           
        if(flag==0 && N!= 1)
            cout << i << " ";
    }
    
}
 
   return 0;
}
