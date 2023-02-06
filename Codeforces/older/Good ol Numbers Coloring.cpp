#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int GCD(int a,int b)
{
    int x,r=1;
    while(r)
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
    return b;
}
int main()
{
    int t,i,a,b;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>a>>b;
        if(GCD(a,b)!=1)
        {
            cout <<"Infinite"<<endl;
        }
        else
        {
            cout <<"Finite"<<endl;
        }
        
    }
    return 0;
}