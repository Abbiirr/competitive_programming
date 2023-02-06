#include<iostream>
using namespace std;
#include<cstdio>
#include<cmath>
int main()
{
    int n,i,x,y,j1=1,j2=2;
    cin >>n;
    int a[n];
    cin >>a[0]>>a[1];
    x=abs(a[0]-a[1]);
    for(i=2;i<n;i++)
    {
        cin >>a[i];
        y=abs(a[i]-a[i-1]);
        if(y<x)
        {
            x=y;
            j1=i+1;
            j2=i;
        }

    }
    y=abs(a[0]-a[n-1]);
    if(y<x)
        {
            x=y;
            j1=1;
            j2=n;
        }
    cout <<j1<<' '<<j2;
    return 0;

}
