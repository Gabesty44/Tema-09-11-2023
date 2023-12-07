#include <iostream>

using namespace std;

int main()
{
int n,m,s1=0,s2=0,s=0,i;
cin>>n>>m;
for(i=1;i<=n;i++)
    s1+=i;
for(i=1;i<=m;i++)
    s2+=i;
if(s1>=s2)
    s=s1-s2;
else
    s=s2-s1;
cout<<s;
return 0;
}
