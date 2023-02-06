//https://codeforces.com/contest/682/problem/A
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,m,i,l;
    cin >>n>>m;
    int r1[5]={0},rem=0,r2[5]={0};
    l=m/5;
    if(m>=4) // I check 1 to m for y%5 1to 4 then store it in r1;
    {
        for(i=0;i<5;i++)
        {
            r1[i]=1;  
        }
        for(i=0;i<5;i++)
        {
            r1[i]*=l;
        }
        for(i=l*5;i<=m;i++)
        {
            rem=i%5;
            r1[rem]++;
        }
        r1[0]--;
    }
    else
    {
        for(i=1;i<=m;i++)
        {
            r1[i]=1;
        }
    }
    l=n/5;
    long long int ans=0;
    for(i=1;i<=n;i++)
    {
        rem=(5-(i%5))%5;  //for each value of x%5=i, ans=number of r1[i]. 
        ans+=r1[rem];
    }
    
    
    cout <<ans;
    return 0;
}