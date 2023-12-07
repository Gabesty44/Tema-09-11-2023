#include <iostream>

using namespace std;

int main()
{
int n,c2=0,c3=0,k,l;
cin>>n;
while(n!=0)
{
    if(n%10==2)
        c2++;
    else
        c3++;
    n/=10;
}
    if(c2==c3)
        cout<<"Numarul de cifre este egal";
    else
        if(c2>c3)
            cout<<"Sunt mai multe cifre de 2";
        else
            cout<<"Sunt mai multe cifre de 3";
return 0;
}
