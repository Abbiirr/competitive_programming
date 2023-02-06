#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI          2*acos(0.0)
int main()
{
    int t,i,j,n,x;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        int a[n],d=0,lies=0;
        for(j=0;j<n;j++)
        {
            cin >>a[j];
        }
        d=a[0]-2;
        lies=ceil(d/5.0);
        cout <<"Case "<<i<<": ";
        for(j=1;j<n;j++)
        {
            d=a[j]-a[j-1];
            lies +=ceil(d/5.0);
        }
        cout <<lies<<endl;
    }
    return 0;
}
