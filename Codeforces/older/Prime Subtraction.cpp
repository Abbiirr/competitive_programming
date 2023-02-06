#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
long long int prime_check(long long int n)
{
    long long int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
long long int divisor(long long int n)
{
    long long int i;
    for(i=sqrt(n);i>=2;i--)
    {
        if(n%i==0&&prime_check(i)==1)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    long long int t,i,x,y,z,p;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>x>>y;
        z=x-y;
        if(z==1)
        {
            cout <<"NO";
        }
        else
        {
            cout <<"YES";
        }
        cout <<endl;

    }
    return 0;

}
