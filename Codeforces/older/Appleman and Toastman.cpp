#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    long long int n,i,j,sum=0,x,y;
    cin >>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >>a[i];
        sum +=a[i];
    }
    sort(a,a+n);
    x=sum;
    for(i=0;i<n-1;i++)
    {

        sum +=x;
        x -=a[i];
    }

    cout <<sum;
    return 0;
}
