#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
#define SP(x,y)                 fixed<<setprecision((y))<<(x)
int main()
{
    int n;
    cin >>n;
    if(n==0)
        cout <<1;
    else if(n%4==0)
    {
        cout <<6;
    }
    else if(n%4==1)
    {
        cout <<8;
    }
    else if(n%4==2)
    {
        cout <<4;
    }
    else if(n%4==3)
    {
        cout <<2;
    }
    return 0;
}
