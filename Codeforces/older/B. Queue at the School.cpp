#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI          2*acos(0.0)
int main()
{
    int n,t;
    cin >>n>>t;
    n++;
    int  i;
    char a[n];
    for(i=1;i<n;i++)
    {
        cin >>a[i];

    }
    for(int j=1;j<=t;j++)
    {
        for(i=2;i<n;i++)
        {
            if(a[i-1]=='B'&&a[i]=='G')
            {
                a[i-1]='G';
                a[i] = 'B';
                i++;
            }
        }
    }
    for(i=1;i<n;i++)
    {
        cout << a[i];

    }
    return 0;
}
