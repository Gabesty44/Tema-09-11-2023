#include <iostream>

using namespace std;

int main()
{
int n,uc,k=0;
cin>>n;
uc=n%10;
while(n!=0)
{
    if(n%10==uc)
        k++;
    n/=10;
}
cout<<k;
return 0;
}
