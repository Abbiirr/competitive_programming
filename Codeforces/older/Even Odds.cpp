#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    long long int n,k,i;
    long double d;
    cin >>n>>k;
    d=n;
    d=ceil(d/2);
    if(k>d)
    {
        k=k-d;
        k=2*k;
    }
    else
    {
        k=(2*k)-1;
    }
    cout <<k;
    return 0;
}
