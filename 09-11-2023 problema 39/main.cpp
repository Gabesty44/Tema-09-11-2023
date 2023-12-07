#include <iostream>

using namespace std;

int main()
{
int n,sumaPatrate=0,sumaI=0,suma3=0,k=0,p=1,suma=0,cN,cS;
cin>>n;
cN=n%10;
while(n>=10)
{
    n=n/10;
}
cS=n;
suma=cS+cN;
while(n!=0)
{
    sumaPatrate+=(n%10)*(n%10);
    if((n%10)%2==1)
        sumaI+=n%10;
    if((n%10)%3==0)
        suma3+=n%10;
    if(n%10>5)
        k++;
    if(n%10!=0)
        p*=n%10;
    n/=10;
}
cout<<"Suma patratelor cifrelor este "<<sumaPatrate<<endl;
cout<<"Suma cifrelor impare este "<<sumaI<<endl;
cout<<"Suma cifrelor divizibile cu 3 este "<<suma3<<endl;
cout<<"Numarul de cifre mai mari decat 5 este "<<k<<endl;
cout<<"Produsul cifrelor nenule este "<<p<<endl;
cout<<"Suma primei si a ultimei cifre este "<<suma<<endl;
return 0;
}
