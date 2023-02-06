#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,i,j,n,m,p[2]={0},k,l;
    char op;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n>>m;
        int a[n],b;
        for(j=0;j<n;j++)
        {
            cin >>a[j];
        }
        for(j=1;j<=m;j++)
        {
            cin >>op;
            if(op=='S')
            {
                cin >>b;
                for(k=0;k<n;k++)
                {
                    a[k] +=b;
                }
            }
            else if(op=='M')
            {
                cin >>b;
                for(k=0;k<n;k++)
                {
                    a[k] *=b;
                }
            }
            else if(op=='D')
            {
                cin >>b;
                for(k=0;k<n;k++)
                {
                    a[k] /=b;
                }
            }
            else if(op=='R')
            {
                for(k=0,l=n-1;k<n/2;k++,l--)
                {
                    b=a[k];
                    a[k]=a[l];
                    a[l]=b;
                }
            }
            else if(op=='P')
            {
                cin >>p[0]>>p[1];
                b=a[p[0]];
                a[p[0]]=a[p[1]];
                a[p[1]]=b;
            }
        }
        cout <<"Case "<<i<<":"<<endl;
        for(j=0;j<n-1;j++)
        {
            cout <<a[j]<<' ';
        }
        cout <<a[n-1]<<endl;
    }
}
