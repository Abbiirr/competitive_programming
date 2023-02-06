#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,i,x;
    cin >>n;
    int a[n],b[n];
    x=n-1;
    for(i=0;i<n;i++)
    {
        cin >>a[i]>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    for(i=1;i<n;i++)
    {
        if(a[i]==a[i-1]||b[i]==b[i-1])
        {
            x--;
        }
    }
    cout <<x;
    return 0;

}
