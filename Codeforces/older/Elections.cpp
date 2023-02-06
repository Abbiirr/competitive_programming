#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,m,i,j,x=INT_MIN,y=0;
    cin >>n>>m;
    int a[m][n],b[n],c[n]={0};
    for(i=0;i<m;i++)
    {
        x=INT_MIN,y=0;
        for(j=0;j<n;j++)
        {
            cin >>a[i][j];
            if(a[i][j]>x)
            {
                x=a[i][j];
                y=j+1;
            }
        }
        c[y-1]++;
    }
    x=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(c[i]>x)
        {
            x=c[i];
            y=i+1;
        }
    }

    cout <<y;
    return 0;

}
