#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n;
    cin >>n;
    int l=3*n;
    long long int a[l+1],i,sum=0;
    for(i=0;i<3*n;i++)
    {
        cin >>a[i];
    }
    sort(a,a+l,greater<int>());
    for(i=1;i<2*n;i+=2)
    {
        sum=sum+a[i];
    }
    cout <<sum;
    return 0;
}