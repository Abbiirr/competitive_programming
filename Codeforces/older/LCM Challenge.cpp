#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    long long int n,i,b,x,c=0,y=0;
    cin >>n;
    if(n==1||n==2)
    {
        cout <<n;
    }
    else if(n==3)
    {
        cout <<6;
    }
    else if(n%2==0)
    {
        if(n%3==0)
        {
            cout <<(n-1)*(n-2)*(n-3);
        }
        else
            cout <<(n-1)*(n-3)*n;
    }
    else
    {
        cout <<n*(n-1)*(n-2);
    }

    return 0;
}
