#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t,a,b,n,i;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        if(n%2!=0)
            cout <<n/2;
        else if(n<3)
            cout <<0;
        else 
            cout <<n/2-1;
        cout <<endl;
    }
    return 0;
}
