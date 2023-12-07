#include <iostream>

using namespace std;

int main()
{
int m,n,k=0;
cin>>m>>n;
while(m!=0)
{
    if((m%10)+(n%10)>=10)
        k++;
    m/=10;
    n/=10;
}
if(k>0)
    cout<<"DA, "<<k<<" transporturi";
else
    cout<<"NU";
return 0;
}
