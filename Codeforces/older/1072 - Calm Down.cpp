#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    long double R,n,r,t,i;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>R>>n;
        r=sin(PI/n)*R/(1+sin(PI/n));
        cout <<"Case "<<i<<": "<<setprecision(10)<<r<<"\n";
    }
    return 0;
}
