#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI          2*acos(0.0)
int main()
{
    int t,i,n,m,k,j,l,p,s;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n>>m>>k;
        int store[n][k],c=0;
        for(j=0;j<n;j++)
        {
            for(l=0;l<k;l++)
            {
                cin >>store[j][l];
            }
        }
        cin >>p;
        int tst[p],wish,d=0;
        for(j=0;j<p;j++)
        {
            cin >>tst[j];
        }
        for(j=0;j<n;j++)
        {
            c=0;
            for(l=0;l<k;l++)
            {
                d=0;
                wish=store[j][l];
                for(s=0;s<p;s++)
                {
                    if(abs(wish)==tst[s])
                    {
                        d=1;
                    }
                }
                if(wish<0 && d==0) c=1;
                if(wish>0 && d==1) c=1;
            }
            if(c==0)
                break;
        }
        cout <<"Case "<<i<<": ";
        if(c==1)
            cout <<"Yes"<<endl;
        else
            cout <<"No"<<endl;

    }
    return 0;
}
