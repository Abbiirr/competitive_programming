#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    long long int n,t,i,y,sum;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        sum=n*(n+1)/2;
        for(y=1;y<=n;y*=2)
        {
            sum -=y*2;
        }
        cout <<sum<<endl;
    }
    return 0;
}
