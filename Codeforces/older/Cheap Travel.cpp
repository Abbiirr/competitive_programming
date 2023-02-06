#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,m,a,b,x=0,y,z;
    cin >>n>>m>>a>>b;
    if(n%m==0)
    {
        y=n/m;
        x=x+min(y*b,n*a);
    }
    else
    {
        z=n-(n%m);
        y=z/m;
        x=x+min(y*b,z*a);
        n=n-z;
        x=x+min(1*b,n*a);
    }
    cout <<x;
    return 0;
}
