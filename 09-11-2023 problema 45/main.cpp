#include <iostream>

using namespace std;

int main()
{
int n,i,c;
cin>>n;
while(n!=0)
{
    if((n%10)%2==0)
    {
        c=n%10;
        break;
    }
    n/=10;
}
cout<<c;
return 0;
}
