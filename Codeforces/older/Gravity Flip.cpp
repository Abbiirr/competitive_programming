#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,i,j,d;
    cin >>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin >>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        cout <<a[i]<<' ';
    }
    return 0;

}
