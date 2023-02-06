#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,i,j,n,xh,yh,zh,xl,yl,zl,v;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        int x1[n],x2[n],y1[n],y2[n],z1[n],z2[n];
        for(j=0;j<n;j++)
        {
            cin >>x1[j]>>y1[j]>>z1[j]>>x2[j]>>y2[j]>>z2[j];
        }
        cout <<"Case "<<i<<": ";
        xl=0,yl=0,zl=0,xh=1001,yh=1001,zh=1001;
        for(j=0;j<n;j++)
        {
            xh=min(xh,x2[j]);
            xl=max(xl,x1[j]);
            yh=min(yh,y2[j]);
            yl=max(yl,y1[j]);
            zh=min(zh,z2[j]);
            zl=max(zl,z1[j]);
        }
        v=(xh-xl)*(yh-yl)*(zh-zl);
        if(v<0)
        {
            cout <<0<<endl;
        }
        else
        {
            cout <<v<<endl;
        }
    }
    return 0;
}
