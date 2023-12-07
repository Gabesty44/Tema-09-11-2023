#include <iostream>

using namespace std;

int main()
{
int n,x,s=0,i;
cin>>n;
for(i=1;i<=n*2;i++)
{
    if(i%2==1)
    {
        x+=i;
        s+=x;

    }
}
cout<<s;
return 0;
}
