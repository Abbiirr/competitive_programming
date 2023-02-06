#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<string>
#define  ll long long
#define  ull unsigned long long
#define  lld long long double

int gcd(int a, int b)
{
    int x,r=b;
    while(r!=0)
    {
        if(a>b)
        {
            x=a;
            a=b;
            b=x;
        }
        r=b%a;
        b=a;
        a=r;
    }
    //cout <<"GCD is : "<<b<<endl;
    return b;
}

int main()
{
    ll t;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        ll l,b;
        cin >>l>>b;
        ll x= l*b;
        ll y= gcd(l,b);
        cout <<x/(y*y)<<endl;
    }


    return 0;
}
