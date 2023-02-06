#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{

    int t,i;
    long double s,c,x,r;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>r;

        c=PI*r*r;
        s=r*r*4;
        x=s-c;
        cout <<"Case "<<i<<": "<<fixed<< setprecision(2)<<x<<"\n";
    }
    return 0;
}
