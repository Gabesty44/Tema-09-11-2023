#include <iostream>
#include <cmath>

using namespace std;

int main()
{
int n,i,ogl=0,urma,k=0,x=0,m;
cin>>n;
m=n;
while(n!=0)
{
    k++;
    ogl=10*ogl+n%10;
    n/=10;

}
for(i=0;i<=k-1;i++)
    x+=pow(10,i);
urma=(9*x)-m;
if(urma==ogl)
    cout<<"Numarul este curat";
else
    cout<<"Numarul nu este curat";
return 0;
}
