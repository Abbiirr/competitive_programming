#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    freopen("tabs.in","r",stdin);
    int n,k,i,t;
    cin >>t;
    for(i=1;i<=t;i++)
    {
       cin >>n>>k;
    if(k==1)
    {
        cout <<1<<"\n";
    }
    else if(k==n)
    {
        cout <<1<<"\n";
    }
    else
        cout <<2<<"\n";
    }

    return 0;
}
