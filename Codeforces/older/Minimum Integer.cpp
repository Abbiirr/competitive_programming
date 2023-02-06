#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int q,i,r,l,d,x;
    cin >>q;
    for(i=1;i<=q;i++)
    {
        cin >>l>>r>>d;
        if(d>=l)
        {
            x=r%d;
            x=r-x+d;
        }
        else
        {
            x=d;
        }
        cout <<x<<endl;
    }
    return 0;
}
