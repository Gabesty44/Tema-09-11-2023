#include <iostream>

using namespace std;

int main()
{
int n,s,i;
cin>>n;
s=1*n;
for(i=2;i<=n;i++)
{
    s=s+(i*(n-(i-1)));
}
cout<<s;
return 0;
}
