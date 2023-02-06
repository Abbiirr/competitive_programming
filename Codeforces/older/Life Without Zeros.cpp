#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int r_zero(int n)
{
    int r=0,d=0,t=1;
    while(n)
    {
        d=n%10;
        n=n/10;
        if(d)
        {
            r=r+d*t;
            t=t*10;
        }
    }
    return r;
}
int main()
{
    int a,b,c;
    cin >>a>>b;
    c=a+b;
    a=r_zero(a),b=r_zero(b),c=r_zero(c);
    if(a+b==c)
        cout  <<"YES";
    else
        cout <<"NO";
    return 0;
}
