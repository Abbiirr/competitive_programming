#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n,i,j,x=101,y=101;
    cin >>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >>a[i];
        if(a[i]<y)
        {
            y=a[i];
        }
    }
    for(i=0;i<n;i++)
    {

        if(a[i]>y&&a[i]<x)
        {
            x=a[i];
        }
    }
    if(x==101)
    {
        cout <<"NO";
    }
    else
        cout <<x;
    return 0;
}
