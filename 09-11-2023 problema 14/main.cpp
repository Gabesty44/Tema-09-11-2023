#include <iostream>

using namespace std;

int main()
{
int n,i,s=0,p1=1,p2=1;
cin>>n;
if(n%2==1)
{
    cout<<"Numarul este impar";
}
else
{
for(i=1;i<=n/2;i++)
    p1*=i;
for(i=n/2+1;i<=n;i++)
    p2*=i;
s=p1+p2;
cout<<s;
}
return 0;
}
