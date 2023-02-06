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
        a=n%10;
        b=(n%100)/10;
        c=(n%1000)/100;
        d=n/1000;
        break;
    }
    printf("%d %d %d %d",a,b,c,d);
    return 0;
}