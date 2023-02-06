#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,i;
    double r1,r2,h,p;
    double R1,v;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>r1>>r2>>h>>p;
        cout <<"Case "<<i<<": ";
        R1=r2+((r1-r2)*p)/h;
        v=(PI*p*(r2*r2+r2*R1+R1*R1))/3;
        cout <<setprecision(15)<<v<<endl;
    }
    return 0;
}
