#include <iostream>
using namespace std;
int n,i,x;
int main()
{
cin>>n;
x=n/2+1;
if (n%2==0)
    cout<<"nu este norocos";
else
    cout<<"norocos"<<endl;
    for (i=x;i<x+n;i++)
    cout<<i<<" ";
   return 0;

}
