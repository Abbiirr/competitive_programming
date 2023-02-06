#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,n,m,i,x;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n>>m;
        if(n==1||m==1)
        {
            cout <<"YES"<<endl;
        }
        else if(m==2&&n==2)
        {
            cout <<"YES"<<endl;
        }
        else
            cout <<"NO"<<endl;
    }
    return 0;
}
