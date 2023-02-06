#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,i,xt=0,yt=0,zt=0;
    cin >>n;
    int x[n],y[n],z[n];
    for(i=0;i<n;i++)
    {
        cin >>x[i]>>y[i]>>z[i];
        xt=xt+x[i];
        yt=yt+y[i];
        zt=zt+z[i];
    }
    if(xt==0&&yt==0&&zt==0)
        cout <<"YES";
    else
        cout <<"NO";
    return 0;

}
