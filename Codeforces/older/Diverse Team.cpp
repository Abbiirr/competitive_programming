#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n,k,i,j,d=1;
    cin >>n>>k;
    int a[n],b[k]={0},c[k];
    cin >>a[0];
    b[0]=a[0];
    c[0]=1;
    for(i=1;i<n;i++)
    {
        cin >>a[i];
        for(j=0;j<=d;j++)
        {
            if(a[i]==b[j])
            {
                break;
            }
            if(j==d)
            {
                b[d]=a[i];
                c[d]=i+1;
                d++;
                break;
            }
        }
        if(d==k)
        {
            cout <<"YES\n";
            for(j=0;j<d;j++)
            {
                cout <<c[j]<<' ';
            }
            return 0;
        }
    }
    if(d==k)
        {
            cout <<"YES\n";
            for(j=0;j<d;j++)
            {
                cout <<c[j]<<' ';
            }
            return 0;
        }
    cout <<"NO";
            return 0;
}
