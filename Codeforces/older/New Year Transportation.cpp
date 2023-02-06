#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,t,i,x=1;
    cin >>n>>t;
    int a[n];
    for(i=1;i<n;i++)
    {
        cin >>a[i];
    }
    for(i=1;i<n;)
    {
        x=a[i]+x;
        i=x;
        //cout <<x<<' ';
        if(x>t)
        {
            cout <<"NO";
            break;
        }
        else if(x==t)
        {
            cout <<"YES";
            break;
        }
    }
    return 0;
}
