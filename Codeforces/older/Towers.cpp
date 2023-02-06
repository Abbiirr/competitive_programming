#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,i,x=1,y=1,c=1;
    cin >>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >>a[i];
    }
    sort(a,a+n);
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            x++;
        }
        if(a[i]==a[i-1])
        {
            c++;
            if(c>y)
                y=c;
        }
        else
            c=1;
    }
    cout <<y<<' '<<x;
    return 0;
}
