#include <iostream>

using namespace std;

int main()
{
int n,max=0,k=0,m;
cin>>n;
m=n;
while(n!=0)
{
    if(n%10>max)
        max=n%10;
    n/=10;
}
while(m!=0)
{
    if(m%10==max)
        k++;
    m/=10;
}
cout<<max<<" "<<k;
return 0;
}
