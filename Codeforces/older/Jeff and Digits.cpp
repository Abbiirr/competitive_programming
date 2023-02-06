#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,i,x=0,c=0;
    cin >>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >>a[i];
        if(a[i]==0)
            c++;
        else if(a[i]==5)
            x++;
    }
    if(c==0)
        cout <<-1;
    else if(x<9)
        cout <<0;
    else
    {
        x=x-x%9;
        for(i=0;i<x;i++)
        {
            cout<<5;
        }
        for(i=0;i<c;i++)
            cout <<0;
    }
    return 0;
}
