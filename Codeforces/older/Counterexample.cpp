#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    long long int l,r,a,b,c;
    cin >>l>>r;
    if(r-l<2)
    {
        cout <<-1;
    }
    else if(l%2==0)
    {
        cout <<l<<' '<<l+1<<' '<<l+2;
    }
    else if(r-l>2)
    {
        cout <<l+1<<' '<<l+2<<' '<<l+3;
    }
    else
        cout <<-1;
    return 0;
}
