#include <iostream>

using namespace std;

int main()
{
int n,i,s,a,min=999999999,max=0;
cin>>n;
for(i=1;i<=n;i++)
{
    s=0;
    cin>>a;
    while(a!=0)
    {
        s+=a%10;
        a/=10;
    }
    if(s<min)
        min=s;
    if(s>max)
        max=s;
}
cout<<min<<" "<<max;
return 0;
}
