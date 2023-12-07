#include <iostream>

using namespace std;

int main()
{
int n,i,s,c;
c=1;
s=0;
cin>>n;
for(i=1;i<=n;i++)
{
    if(c==1)
    {
        s+=(i*(i+1));
        c-=1;
    }
    else
    {
        s-=(i*(i+1));
        c+=1;
    }
}
cout<<s;
return 0;
}
