//https://codeforces.com/contest/996/problem/A
#include<iostream>
#include<cmath>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,c=0;
    cin >>n;
    c+=n/100+(n%100)/20+(n%20)/10+(n%10)/5+(n%5);
    
    cout <<c;
    return 0;
    
}