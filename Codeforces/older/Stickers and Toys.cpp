#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int T,i,n,s,t,x=0;
    cin >>T;
    for(i=1;i<=T;i++)
    {
        cin >>n>>s>>t;
        x=n-min(s,t)+1;
        cout <<x<<endl;
    }

    return 0;
}
