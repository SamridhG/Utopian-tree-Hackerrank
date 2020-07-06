#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int a,temp=0;
        cin>>a;
for(j=0;j<=a;j++)
{
    if(j==0)
    {
        temp=1;
    }
   
    else if(j%2!=0)
    {
        temp=temp*2;
    }
   else  if(j%2==0)
    {
        temp=temp+1;
    }
}
cout<<temp<<endl;
    }
    return 0;
}
 
