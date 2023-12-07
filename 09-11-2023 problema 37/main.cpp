#include <iostream>

using namespace std;

int main()
{
int n,max,min,c,p;
cin>>n;
while(n!=0)
{
    c=n%10;
    if(c%2==0 && c>max)
        max=c;
    if(c%2==1 && c<min)
        min=c;
    n/=10;
}
p=min*max;
cout<<p;
return 0;
}
