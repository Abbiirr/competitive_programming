//https://codeforces.com/contest/573/problem/A
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int gcd(int a,int b)
{
    int x,r=5;
    while(r!=0)
    {
        if(a>b)
        {
            x=a;
            a=b;
            b=x;
        }
        r=b%a;
        b=a;
        a=r;
    }
    return b;
}
int main()
{
    int n,i;
    cin >>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >>a[i];
        while(a[i]%2==0) a[i]/=2;
        while(a[i]%3==0) a[i]/=3;
    }
    for(i=0;i<n;i++)  //instead of doubling or tripling,
    {                 //this program divides all by 2 and 3 and checks if they are equal
        if(a[i]!=a[0])
        {
            cout <<"No";
            return 0;
        }
    }
    cout <<"Yes";
    return 0;
}