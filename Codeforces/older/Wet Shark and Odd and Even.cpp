#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    long long int n,i,x=INT_MAX,sum=0;
    cin >>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >>a[i];
        if(a[i]%2==1&&a[i]<x)
        {
            x=a[i];
        }
        sum=sum+a[i];
    }
    if(sum%2!=0)
    {
        sum=sum-x;
    }
    cout <<sum;
    return 0;
}
