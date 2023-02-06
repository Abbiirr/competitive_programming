#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,i,c=1,d=1;
    cin >>n;
    int a[n];
    cin >>a[0];
    for(i=1;i<n;i++)
    {
        cin >>a[i];
        if(a[i]>=a[i-1])
        {
            c++;
            if(c>d)
            {
                d=c;
            }
        }
        else
        {
            c=1;
        }
    }
    cout <<d;
    return 0;
}
