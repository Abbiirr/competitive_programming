#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    long long int t,n,x,y,sq,ex,i;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        sq=ceil(sqrt(n));
        ex=sq*sq-n;
        if(ex<sq)
        {
            x=ex+1;
            y=sq;
        }
        else
        {
            x=sq;
            y=n-(sq-1)*(sq-1);
        }
        if(sq%2==0)
        {
            swap(x,y);
        }
        cout << "Case " << i << ": ";
        cout << x << " " << y << endl;
    }
    return 0;
}
