#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,x,i;
    cin >>n;
    if(n==1)
    {
        int a;
        cin >>a;

        if(a==15)
            cout <<"DOWN";
        else if(a==0)
            cout <<"UP";
        else
            cout <<-1;
    }
    else
    {
        int a[n];
        for(i=0;i<n;i++)
        {
            cin >>a[i];
        }
        x=a[n-1]-a[n-2];
        if(a[n-1]==15)
            cout <<"DOWN";
        else if(a[n-1]==0)
            cout <<"UP";
        else if(x>0)
            cout <<"UP";
        else if(x<0)
            cout <<"DOWN";
        else
            cout <<-1;
    }
    return 0;
}
