#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,m,x,i;
    cin >>n>>m;
    if(m%n!=0)
    {
        cout <<-1;
    }
    else
    {
        x=m/n;
        if(x==1)
        {
            cout <<0;
        }
        else
        {
            for(i=0;x%6==0;i=i+2)
            {
                x=x/6;
            }
            for(;x%3==0;i++)
            {
                x=x/3;
            }
            for(;x%2==0;i++)
            {
                x=x/2;
            }
            if(x==1)
                cout <<i;
            else
                cout <<-1;
        }
    }
    return 0;
}
