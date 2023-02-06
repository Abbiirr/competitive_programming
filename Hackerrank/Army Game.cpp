#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<string>

int main()
{
    int n,m;
    cin >>n>>m;
    cout <<(n+n%2)*(m+m%2)/4;


    return 0;
}
