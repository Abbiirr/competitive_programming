#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
#define SP(x,y)                 fixed<<setprecision((y))<<(x)
int main()
{
    int t,i;
    double ox,oy,ax,ay,bx,by,r,theta,s,ab,A,B,O;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>ox>>oy>>ax>>ay>>bx>>by;
        r=sqrt(((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay)));
        ab=sqrt(((bx-ax)*(bx-ax))+((by-ay)*(by-ay)));
        theta=acos(((r*r)+(r*r)-(ab*ab))/(2.0*r*r));
        s=r*theta;
        //cout <<r<<' '<<ab<<' '<<theta<<' '<<endl;
        cout <<"Case "<<i<<": "<<SP(s,15)<<endl;
    }
    return 0;
}
