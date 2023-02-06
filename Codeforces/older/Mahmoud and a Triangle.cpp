//https://codeforces.com/contest/766/problem/B
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)

int main()
{
    int n,i;
    cin >>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >>a[i];
    }
    sort(a,a+n);  //sorts the array
    for(i=1;i<n-1;i++)
    {
        if(a[i-1]+a[i]>a[i+1])  // checks if the 3 lines can form a triangle 
        {
            cout <<"Yes";
            return 0;
        }
    }
    cout <<"No";
    return 0;
}