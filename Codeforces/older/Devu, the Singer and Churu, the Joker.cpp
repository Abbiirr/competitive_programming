#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,d,i,sum=0,x=0;
    cin >>n>>d;
    int t[n];
    for(i=0;i<n;i++)
    {
        cin >>t[i];
        sum=sum+t[i];
    }
    d=d-sum-(n-1)*10;
    x=x+(n-1)*2;
    if(d==0)
    {
        cout <<x;
    }
    else if(d%5==0||d>0)
    {
        x=x+d/5;
        cout <<x;
    }
    else
        cout <<"-1";
    return 0;
}
