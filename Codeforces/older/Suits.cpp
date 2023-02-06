#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int a,b,c,d,e,f,x=0,y=0;
    cin >>a>>b>>c>>d>>e>>f;
    if(e>f)
    {
        x=min(a,d);
        d=d-x;
        x=x*e;
        if(d>0)
        {
            y=min(b,c);
            x=x+min(d,min(b,c))*f;
        }
    }
    else
    {
        x=min(d,min(b,c));
        d=d-x;
        x=x*f;
        if(d>0)
        {
            y=min(b,c);
            x=x+min(a,d)*e;
        }
    }
    cout <<x;
    return 0;
}
