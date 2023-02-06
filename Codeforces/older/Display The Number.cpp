#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,n,i,x;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        while(n%2==1)
        {
            cout  <<7;
            n=n-3;

        }

    while(n > 0)
    {
        cout <<1;
        n=n-2;
    }
    cout <<endl;

    }
    return 0;
}
