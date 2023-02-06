#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,k,i,x,total=0,r,l;
    cin >>n>>k;
    for(i=0;i<n;i++)
    {
        cin >>l>>r;
        total=total +r-l+1;
    }
    if(total%k==0)
    {
        cout <<0;
    }
    else
    {
        x=k-total%k;
        cout <<x;
    }
    return 0;
}
