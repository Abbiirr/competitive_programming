//https://codeforces.com/contest/1285/problem/C
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
long long int  gcd(long long int  a,long long int  b)
{
    long long int  x,r=5;
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
long long int  lcm(long long int  a,long long int  b)
{
    return (a*b)/gcd(a,b);
}
int  main()
{
    long long int  x,i;
    cin >>x;
    for(i=sqrt(x);i>0;i--)  //checks from sqrt(x) to 1 for divisors of x and lmc(i,x/i)==x
    {
        if(x%i==0&&lcm(i,x/i)==x)  //in this order the first found numbers will be the minimum max(a,b)
        {
            cout <<i<<' '<<x/i;
            return 0;
        }
    }
}
