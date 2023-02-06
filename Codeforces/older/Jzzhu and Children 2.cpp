#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    long double m;
    int n,i,x=INT_MIN,c,y=0;
    cin >>n>>m;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >>a[i];
        c=ceil(a[i]/m);
        if(c>=x)
        {
            x=c;
            y=i+1;
        }

    }
    cout <<y;
    return 0;
}
