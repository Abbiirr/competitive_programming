#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,k,i,x;
    cin >>n>>k;
    int a[n],b[n],f[n];

    for(i=0;i<n;i++)
    {
        cin >>a[i]>>b[i];
        if(b[i]<=k)
        {
            f[i]=a[i];
        }
        else
        {
            f[i]=a[i]-b[i]+k;
        }
    }
    sort(f,f+n);
    cout <<f[n-1];
    return 0;

}
