#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,i,x=5,y=5;
    cin >>n;
    if(n>5)
    {
        for(i=1;x<n;i++)
        {
        x=5*pow(2,i);
        if(x>n)
        {
            i--;
            break;
        }
        if(x==n)
        {
            break;
        };
        y=5*pow(2,i);
        }
        n=n-y;

        x=pow(2,i);
        if(n%x==0)
        {
        n=n/x;
        }
        else
        n=n/x+1;

    }

    if(n==1)
    {
        cout <<"Sheldon";
    }
    else if(n==2)
    {
        cout <<"Leonard";
    }
    else if(n==3)
    {
        cout <<"Penny";
    }
    else if(n==4)
    {
        cout <<"Rajesh";
    }
    else if(n==5)
    {
        cout <<"Howard";
    }
    return 0;
}
