#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
#define SP(x,y)                 fixed<<setprecision((y))<<(x)
int main()
{
    long long int a, b, c, d, e, f,n,ara[100000],i,t,m;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &ara[0], &ara[1], &ara[2], &ara[3], &ara[4], &ara[5], &n);
        for(m=6;m<=n;m++)
        {
            ara[m]=(ara[m-1]+ara[m-2]+ara[m-3]+ara[m-4]+ara[m-5]+ara[m-6])% 10000007;
        }
        printf("Case %lld: %lld\n", i, ara[n] % 10000007);
    }
    return 0;
}
