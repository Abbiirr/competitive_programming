#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,i,n,m,k,x;
    double y;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n>>m>>k;
        x=n/k;
        if(m>x)
        {
            m=m-x;
            if(m<=k-1)
            {
                cout <<x-1<<endl;
            }
            else
            {
                y=m;
                y=ceil(y/(k-1));
                x=x-y;
                cout <<x<<endl;

            }

        }
        else
        {
            cout <<m<<endl;
        }
    }
    return 0;
}
