#include <iostream>

using namespace std;

int main()
{
int n,i,a,max,c,k=0;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>a;
    max=0;
    while(a>0)
    {
        c=a%10;
        if(c>max)
            max=c;
            a/=10;
    }
    if(max%2==1)
        k++;
}
cout<<k;
return 0;
}
