#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t,m,n,i,x;
    double y;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>m>>n;
        if(m==1||n==1)
        {
            x=max(m,n);
        }
        else if(m==2||n==2)
        {
            x=max(m,n);
            if(x%4==1||x%4==3)
                x++;
            else if(x%4==2)
                x=x+2;
        }
        else
        {
            y=m*n;
            x=ceil(y/2);
        }

        cout <<"Case "<<i<<": "<<x<<"\n";

    }
    return 0;
}
