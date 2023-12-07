#include <iostream>

using namespace std;

int main()
{
int n,s=1,p,i,j;
cin>>n;
for(i=2;i<=n;i++)
{
    p=1;
    for(j=1;j<=i;j++)
    {
        p*=j;
    }
    s+=p;
}
cout<<s;
return 0;
}
