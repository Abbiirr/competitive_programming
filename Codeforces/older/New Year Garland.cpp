#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,i,a,b,c,x,y,z,ans;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>a>>b>>c;
        z=min(a,b);
        y=min(c,max(a,b));
        x=max(c,max(a,b));
        if(x<=y+z+1)
            cout <<"YES"<<endl;
        else
            cout <<"NO"<<endl;
    }
    return 0;
}
