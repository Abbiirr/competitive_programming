#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,c,i,x,y=1;
    cin >>n>>c;
    int a[n];
    cin >>a[0];
    for(i=1;i<n;i++)
    {
        cin >>a[i];
        if(a[i]-a[i-1]>c)
            y=0;
        y++;
    }
    cout <<y;
    return 0;
}
