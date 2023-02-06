#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,m,i,x,y;
    cin >>n>>m;
    int a[m];
    x=INT_MAX;
    for(i=0;i<m;i++)
    {
        cin >>a[i];

    }
    sort(a,a+m);
    for(i=1;i<=m-n;i++)
    {
        x=min(x,a[i+n-1]-a[i]);
    }
    cout <<x;
    return 0;
}
