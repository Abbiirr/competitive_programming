#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n,m,i;
    cin >>n>>m;
    for(i=1;m>=i;i++)
    {
        m=m-i;
        if(i==n)
        {
            i=0;
        }
    }
    cout <<m;
    return 0;
}
