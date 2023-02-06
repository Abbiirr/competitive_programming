#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,a,b,n,x=0,i,j;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>a>>b>>n;
        x=n%3;
        if(x==0)
            cout <<a<<endl;
        else if(x==1)
            cout <<b<<endl;
        else
            cout <<(a^b)<<endl;
    }
    return 0;
}
