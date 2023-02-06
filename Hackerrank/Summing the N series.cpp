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
    ull m= 1000000007;
    //cout <<m<<endl;
    for(int i=0;i<t;i++)
    {
        ull n;
        cin >>n;

        cout <<((n%m)*(n%m))%m<<endl;


    }


    return 0;
}
