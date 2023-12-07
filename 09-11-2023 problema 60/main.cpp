#include <iostream>

using namespace std;

int main()
{
int n,a,i,s=0,prima;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>a;
    while(a!=0)
    {
        prima=a%10;
        a/=10;
    }
    s+=prima;
}
cout<<s;
return 0;
}
