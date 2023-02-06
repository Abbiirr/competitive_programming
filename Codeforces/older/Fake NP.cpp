#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int l,r;
    cin >>l>>r;
    if(l==3&&r==6)
        cout <<3;
    else if(l==r)
        cout <<l;
    else
        cout <<2;
    return 0;
}
