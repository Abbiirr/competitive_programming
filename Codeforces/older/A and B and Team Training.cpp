#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,m,i,x=0;
    cin >>n>>m;
    for(;n>0&&m>0;)
    {
        if(m<2&&n<2)
        {
            break;
        }
        if(n>m)
        {
            n-=2;
            m-=1;
            x++;
        }
        else
        {
            m-=2;
            n-=1;
            x++;
        }
    }
    cout <<x;
    return 0;
}