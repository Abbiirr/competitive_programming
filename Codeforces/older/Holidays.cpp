#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,x,y;
    cin >>n;
    x=n/7*2;
    y=x;
    if(n%7<2)
        x=x+n%7;
    else
        x=x+2;
    if(n%7==6)
        y=y+1;

    cout <<y<<' '<<x;
    return 0;
}
