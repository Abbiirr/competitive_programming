#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int GCD(int a,int b)
{
    int x,r=5;

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

    return b;
}
int lcm(int a,int b)
{
    return (a*b)/GCD(a,b);
}
int main()
{
    int t,i,n;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        int j,x=INT_MAX,y1,y2,l,y=1;
        for(j=2;j<=sqrt(n);j++)
        {
            if(n%j==0)
            {
                y=n/j;
                break;
            }
        }
        /*for(j=1;j<=sqrt(n)+1&&j<n;j++)
        {
            l=lcm(j,n-j);
            if(x>l)
            {
                y1=j;
                y2=n-j;
                x=l;
            }
        }*/
        //cout <<y1<<' '<<y2<<endl;
        cout <<y<<' '<<n-y<<endl;
    }
    return 0;
}