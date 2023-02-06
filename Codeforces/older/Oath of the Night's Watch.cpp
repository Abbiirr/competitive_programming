#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,i,c=0;
    cin >>n;
    if(n<=2)
    {
        cout <<0;
    }
    else
    {
        int a[n];
        for(i=0;i<n;i++)
        {
            cin >>a[i];
        }
        sort(a,a+n);
        for(i=1;i<n-1;i++)
        {
            if(a[i]>a[0]&&a[i]<a[n-1])
                c++;
        }
        cout <<c;
    }
    return 0;
}
