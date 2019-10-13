#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n,m,t,i,j,s,flag;
  cin>>t;
  while(t--)
  {
     cin>>n>>m;
     for(i=n;i<=m;i++)
    {
        flag=0;
        if(i==1)
           flag=1;
           s=sqrt(i);
           for(j=2;j<=s;j++)
           {
              if(i%j==0)
              {
                flag=1;
                break;
              }
           }
      if(flag==0)
        cout<<i<<endl;
     }
      cout<<endl;
  }
return 0;
}  
