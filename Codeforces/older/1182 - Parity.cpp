#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,i,n,an,j;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        an=0;
        while(n)
        {
            if(n&1)
                an++;

            n>>=1;
        }
        if(an%2==0)
            cout <<"Case "<<i<<": even"<<endl;
        else
            cout <<"Case "<<i<<": odd"<<endl;
    }
    return 0;
}
