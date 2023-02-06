#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,h,m,t,c=1,x=INT_MIN,i;
    cin >>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >>h>>m;
        t=h*60+m;
        a[i]=t;
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(c>x)
            x=c;
        if(a[i]==a[i-1])
        {
            c++;

        }
        else
            c=1;
    }
    cout <<x;
    return 0;
}
