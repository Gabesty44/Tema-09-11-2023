#include <iostream>

using namespace std;

int main()
{
int n,k=0;
cin>>n;
while(n!=0)
{
    k+=1;
    n/=10;
}
cout<<k;
return 0;
}
