#include <iostream>

using namespace std;

int main()
{
int n,x=0,p=1,i;
cin>>n;
for(i=1;i<=n*2;i++)
{
    if(i%2==1)
    {
        x+=i;
        p*=x;

    }
}
cout<<p;
return 0;
}
