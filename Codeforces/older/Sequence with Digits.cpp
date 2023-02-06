#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
long long int add(long long int n)
{
    int x,y,r;
    y=0;
    x=10;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        x=min(x,r);
        y=max(y,r);
        if(r==0)
            break;
    }
    return x*y;
}
int main()
{
    long long int k,i,t,j,x,y,l,a,n,r;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld",&a,&k);
        for(l=1;l<k;l++)
        {
            y=add(a);
            if(y==0)
                break;
            a=a+y;
        }
        printf("%lld\n",a);
    }
    return 0;
}
