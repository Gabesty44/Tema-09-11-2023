#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int n,s=0,i;
cin>>n;
for(i=1;i<=n;i++)
    s+=pow(i,i);
cout<<s;
return 0;
}
