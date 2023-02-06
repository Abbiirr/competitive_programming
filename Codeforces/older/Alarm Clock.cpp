#include<iostream>
#include<cstdio>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    long long int t,i,a,b,c,d,x,y,z;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        x=0;
        cin >>a>>b>>c>>d;
        if(b>=a)
            x=b;
        else if(d>=c)
            x=-1;
        else
        {
            x=b;
            a=a-b;
            y=c-d;
            y=ceil(double(a)/y);
            x=x+y*c;
        }
        cout <<x<<endl;
    }
    return 0;
}
