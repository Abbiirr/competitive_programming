#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n,x,i,c=0;
    cin >>n>>x;
    for(i=1;i<=n;i++)
    {
        if(x%i==0&&x/i<=n)
        {
            c++;
        }
    }
    cout <<c;
    return 0;

}
