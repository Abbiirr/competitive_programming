#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
typedef long long ll;
#define mx 1000010
#define mod 10000007
double a[mx];
int main()
{
    ll  t = 1,i;


    for(ll i = 1; i <= mx; i++)
    {
        a[i] = a[i - 1] + log(i);
    }

    cin>>t;
    for(i=1;i<=t;i++)
    {
        ll n, b;
        cin >>n>>b;
        ll newbasenum = (a[n] / log(b) ) + 1;

        printf("Case %lld: %lld\n", i, newbasenum);
    }

    return 0;
}
