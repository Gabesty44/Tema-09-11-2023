#include <iostream>

using namespace std;

int main()
{
int n,x,min=10,c;
cin>>n>>x;
while(n!=0)
{
    c=n%10;
    if(c<min && c>x)
        min=c;
    n/=10;
}
cout<<min;
return 0;
}
