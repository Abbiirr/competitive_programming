#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int n,t=0,i,x=0;
    cin >>n;
    int a[n],p[n];
    cin >>a[0]>>p[0];
    x=p[0];
    t=t+a[0]*x;
    for(i=1;i<n;i++)
    {
        cin >>a[i]>>p[i];
        if(p[i]<x)
        {
            x=p[i];

        }
        t=t+a[i]*x;
    }
    cout <<t;

    return 0;
}
