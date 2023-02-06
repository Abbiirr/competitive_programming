#include <bits/stdc++.h>
using namespace std;
#include<cstdio>
int main()
{
    int t,l,r,n,i,c=0,x;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>l>>r>>n;
        x=r-l;
        if(n<x)
        {
            cout <<n;
        }
        else
        {
            cout <<x;
        }
    }

    return 0;
}
