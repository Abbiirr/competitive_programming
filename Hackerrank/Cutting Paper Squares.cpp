#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<string>
#define  ll long long
#define  ull unsigned long long

int main()
{
    ull n,m;
    cin >>n>>m;
    if(n==1&&m==1)
    {
        cout <<0;
    }
    else if(n==1)
    {
        cout <<m-1;
    }
    else if(m==1)
    {
        cout <<n-1;
    }
    else if(n>m)
    {
        cout <<n-1+(m-1)*n;
    }
    else
    {
        cout <<m-1+(n-1)*m;
    }


    return 0;
}
