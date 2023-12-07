#include <iostream>

using namespace std;

int main()
{
int n,s=0,i,k;
cin>>n>>k;
for(i=1;i<=n;i++)
{
    s+=i%k;
}
cout<<s;
return 0;
}
