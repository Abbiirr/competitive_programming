#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n,i;
    cin >>n;
    double a=0,x=0;
    for(i=1;i<=n;i++)
    {
        cin >>a;
        x=x+a;
    }
    cout <<x/n;
    return 0;
}
