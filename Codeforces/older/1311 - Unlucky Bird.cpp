#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
#define EPS 1e-9
int main()
{
    int t,i;
    double v1,v2,v3,a1,a2,d1,d2,t1,t2,ti,d,f,u=0.0;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>v1>>v2>>v3>>a1>>a2;
        cout <<"Case "<<i<<": ";
        t1=v1/a1;
        t2=v2/a2;
        ti=max(t1,t2);
        d1=(v1*v1-u*u)/(2.0*a1);
        d2=(v2*v2-u*u)/(2.0*a2);
        d=d1+d2;
        f=ti*v3;
        cout <<fixed<<setprecision(9)<<d+EPS<<" "<<fixed<<setprecision(9)<<f+EPS<<endl;
    }
    return 0;
}
