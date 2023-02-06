#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,m,i,j,x,c=0;
    cin >>n>>m;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >>a[i];
        a[i]=a[i]-m;
    }
    x=n;
    for(i=0;;i++)
    {
        if(a[i]>0)
        {
            a[i]=a[i]-m;
            x=i+1;
        }
        else
            c++;
        if(c==n)
            break;
        if(i==n-1)
            i=0;

    }
    cout <<x;
    return 0;
}
