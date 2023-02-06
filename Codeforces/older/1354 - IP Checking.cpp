#include<cstdio>
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI          2*acos(0.0)
long long int conversion(long long int n)
{
    long long int r,i=0,x=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        x=x+r*pow(2,i);
        ++i;
    }
    return x;
}
int main()
{
    long long int t,a,b,c,d,a1,b1,c1,d1,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld.%lld.%lld.%lld%lld.%lld.%lld.%lld",&a,&b,&c,&d,&a1,&b1,&c1,&d1);
        printf("Case %d: ",i);
        a1=conversion(a1);
        b1=conversion(b1);
        c1=conversion(c1);
        d1=conversion(d1);
        if(a1==a&&b1==b&&c1==c&&d1==d)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
