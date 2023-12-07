#include <iostream>

using namespace std;

int main()
{
int n,i,a,k=0,c;
cin>>n;
for(i=1;i<=n;i++)
{
    c=0;
    cin>>a;
    while(a!=0)
    {
        c++;
        a/=10;
    }
    if(c%2==1)
        k++;
}
cout<<k;
return 0;
}
