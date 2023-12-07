#include <iostream>

using namespace std;

int main()
{
int n,m,k=0;
cin>>n;
m=n;
while(n>=10)
{
    n/=10;
}
while(m!=0)
{
    if(m%10==n)
        k++;
    m/=10;
}
cout<<k;
return 0;
}
