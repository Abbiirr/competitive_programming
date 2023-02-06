#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,i,r=1;
    cin >>n;
    while(n>r*5)
    {
        n=n-r*5;
        r=r*2;
    }
    n=(n-1)/r;
    if(n==0)
    {
        cout <<"Sheldon";
    }
    else if(n==1)
    {
        cout <<"Leonard";
    }
    else if(n==2)
    {
        cout <<"Penny";
    }
    else if(n==3)
    {
        cout <<"Rajesh";
    }
    else if(n==4)
    {
        cout <<"Howard";
    }
    return 0;
}

