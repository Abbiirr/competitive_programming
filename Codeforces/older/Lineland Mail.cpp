#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    long long int n,x=-1,y=INT_MAX,i,j,d=0;
    cin >>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        x=-1,y=INT_MAX;
        /*for(j=0;j<n;j++)
        {
            if(j==i)
            {
                continue;
            }
            d=abs(a[i]-a[j]);
            if(d>x)
            {
                x=d;
            }
            if(d<y)
            {
                y=d;
            }

        }*/
        d=abs(a[i]-a[n-1]);
        if(d>x)
        {
                x=d;
        }
        d=abs(a[i]-a[0]);
        if(d>x)
        {
                x=d;
        }

        if(i!=0)
        {
            d=abs(a[i]-a[i-1]);
            if(d<y)
            {
                y=d;
            }
        }
        if(i!=(n-1))
        {
           d=abs(a[i]-a[i+1]);
            if(d<y)
            {
                y=d;
            }
        }

        cout <<y<<' '<<x<<"\n";
    }
    return 0;
}
