#include <iostream>

using namespace std;

int main()
{
int n,p=1,i;
cin>>n;
for(i=1;i<=n*2;i++)
    if(i%2==0)
        p*=i;
cout<<p;
return 0;
}
