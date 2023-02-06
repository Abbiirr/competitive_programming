#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n;
    cin >>n;
    int a[n],mx,mn,count=0;
    cin >>a[0];
    mx=mn=a[0];
    for(int i=1;i<n;i++)
    {
        cin >>a[i];
        if(a[i]>mx)
        {
            mx = a[i];
            count++;
        }
        if(a[i]<mn)
        {
            mn = a[i];
            count++;
        }
    }
    cout <<count;
    return 0;
}
