#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
#define SP(x,y)                 fixed<<setprecision((y))<<(x)
#define mx         1000010
double a[mx];
int main()
{
    a[0]=0;
    long long int x=0,i,t,j,n,b;
    for(i=1;i<=mx;i++)
    {
        a[i] = a[i - 1] + log(i);
    }
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n>>b;
        x= (a[n] / log(b) ) + 1;
        cout <<"Case "<<i<<": "<<x<<endl;
    }
    return 0;
}
