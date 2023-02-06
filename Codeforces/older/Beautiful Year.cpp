//https://codeforces.com/contest/271/problem/A
#include<iostream>
#include<cmath>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,x=1234,a,b,c,d;
    cin >>n;
    while(1)
    {
        n++;
        a=n%10;
        b=(n%100)/10;
        c=(n%1000)/100;
        d=n/1000;
        if(a!=b&&a!=c&& a!=d&& b!=c&& b!=d&& c!=d) break;
    }
    printf("%d",n);
    return 0;
}