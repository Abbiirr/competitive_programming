#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<string>
#define  ll long long
#define  ull unsigned long long

int main()
{
    int t;
    cin >>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin >>n;
        ull a[n-1],count=1;
        for(int j=0;j<n-1;j++)
        {
            cin >>a[j];
            count*=a[j];
            count = count%1234567;
        }
        cout <<count%1234567<<endl;
    }


    return 0;
}
