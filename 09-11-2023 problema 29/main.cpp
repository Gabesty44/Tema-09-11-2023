#include <iostream>

using namespace std;

int main()
{
int n,k,p=1;
cin>>n>>k;
while(n!=0)
{
    if(n%10!=k)
        p*=n%10;
    n/=10;
}
cout<<p;
return 0;
}
