#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,a,b,x;
    cin >>n>>a>>b;
    x=n-a;
    if(x>b)
    {
        x=b+1;
    }
    cout <<x;
    return 0;
}
