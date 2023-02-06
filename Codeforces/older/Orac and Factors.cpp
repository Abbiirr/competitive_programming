#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int divisor(long long int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return i;
    }
    return n;
}
int main()
{
    long long int t,n,k,i,j;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n>>k;
        if(n%2==0)
        {
            n=n+divisor(n)*k;
        }
        else
        {
            n=n+divisor(n);
            n=n+divisor(n)*(k-1);
        }

        cout <<n<<endl;

    }
    return 0;
}
