#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,m,x=0;
    cin >>n>>m;
    if(n<m)
    {
        cout <<n;
        return 0;
    }
    while(n>=m)
    {
        x=x+m;
        n=n-m+1;
    }
    if(n>0)
        x=x+n;
    cout <<x;
    return 0;
}
