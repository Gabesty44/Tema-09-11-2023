#include <iostream>

using namespace std;

int main()
{
int n,i,a,par=0,impar=0;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>a;
    while(a!=0)
    {
        if((a%10)%2==0)
            par++;
        else
            impar++;
        a/=10;
    }
}
cout<<par<<" cifre pare"<<endl<<impar<<" cifre impare";
return 0;
}
