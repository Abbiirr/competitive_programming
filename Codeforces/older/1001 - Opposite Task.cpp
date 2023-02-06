#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n,a,b,t,i;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        if(n>10)
        {
            a=10;
            b=n-10;
        }
        else
        {
            a=n;
            b=0;
        }
        cout <<a<<' '<<b<<"\n";
    }
    return 0;
}
