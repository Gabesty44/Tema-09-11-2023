#include <iostream>

using namespace std;

int main()
{
int n,k,x,c,y=1;
cin>>n>>k;
while(n!=0 && y==1)
{
    if(n%10>k)
        y=0;
    n/=10;
}
if(y)
    cout<<"DA";
else
    cout<<"NU";
return 0;
}
