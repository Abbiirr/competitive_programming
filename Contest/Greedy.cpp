#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#include<cstdio>
int main()
{
    int n,i,j,c=0;
    cin >>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >>a[i];
    }
    sort(a,a+n);
    for(i=2;i<sqrt(a[n-1]);i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]%i==0)
                c++;
        }
        if(c>=n-2)
        {
            cout <<i;
            return 0;
        }
    }
    return 0;
}
