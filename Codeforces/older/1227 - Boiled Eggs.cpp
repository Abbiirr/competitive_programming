#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI          2*acos(0.0)
int main()
{
    int t,p,q,n,i,j;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n>>p>>q;
        int a[n],wt=0,x=0;
        for(j=0;j<n;j++)
        {
            cin >>a[j];
        }
        sort(a,a+n);
        cout <<"Case "<<i<<": ";
        for(j=0;j<n;j++)
        {
            wt=wt+a[j];
            if(wt>q)
            {
                wt=wt-a[j];
                break;
            }
            if(j+1>p)
            {
                break;
            }
        }
        cout <<j<<endl;
    }
    return 0;
}
