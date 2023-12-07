#include <iostream>

using namespace std;

int main()
{
int n,max=0,c;
cin>>n;
while(n!=0)
{
    c=n%10;
    if(c%2==1 && c>max)
        max=c;
    n/=10;
}
cout<<max;
return 0;
}
