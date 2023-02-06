#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    long long int t,n,i,j;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        int a[n],x=0;
        for(j=0;j<n;j++)
        {
            cin >>a[j];
            if(a[j]<0)
            {
                a[j]=0;
            }
            x=x+a[j];
        }
        cout <<"Case "<<i<<": "<<x<<"\n";
    }
    return 0;
}
