#include <iostream>

using namespace std;

int main()
{
int n,i,a,prima=0,max=0;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>a;
    while(a!=0)
    {
        prima=a%10;
        a/=10;
    }
    if(prima>max)
        max=prima;
}
cout<<max;
return 0;
}
