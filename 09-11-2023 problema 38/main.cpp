#include <iostream>

using namespace std;

int main()
{
int a,b,max_a=0,min_a=10,max_b=0,min_b=10;
cin>>a>>b;
while(a!=0)
{
    if(a%10>max_a)
        max_a=a%10;
    if(a%10<min_a)
        min_a=a%10;
    a/=10;
}
while(b!=0)
{
    if(b%10<min_b)
        min_b=b%10;
    if(b%10>max_b)
        max_b=b%10;
    b/=10;
}
if(max_a==min_b)
    cout<<"Numerele sunt bune:"<<max_a;
else
{
    if(min_a==max_b)
        cout<<"Numerele sunt bune:"<<max_b;
    else
        cout<<"Numerele nu sunt bune";

}
return 0;
}
