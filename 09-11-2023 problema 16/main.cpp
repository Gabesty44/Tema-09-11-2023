#include <iostream>

using namespace std;

int main()
{
int i,n,s=0,a;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>a;
    if(a>9 && a<100)
        s+=a;
}
cout<<s;
return 0;
}
