#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,a,b;
    cin >>n>>a>>b;
    if((a-b)%2==0)
    {
        cout <<"Alice";
    }
    else
    {
        cout <<"Borys";
    }
    return 0;
}