#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int a,b,c,i,x;
    cin >>a>>b>>c;
    for(i=0;i<=10000;i++)
    {
        x=c-(a*i);
        if(x<0)
        {
            cout <<"NO";
            return 0;
        }
        else if(x%b==0)
        {
            cout <<"YES";
            return 0;
        }
    }
}
