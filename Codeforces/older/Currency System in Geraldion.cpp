#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,i,x;
    cin >>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >>a[i];
    }
    sort(a,a+n);
    if(a[0]==1)
    {
        cout <<-1;
    }
    else
        cout <<1;
    return 0;
}
