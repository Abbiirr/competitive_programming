#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI          2*acos(0.0)
int main()
{
    long long int t,i,j,b,n,l;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        string a;
        cin >>a>>b;
        cout <<"Case "<<i<<": ";
        l=a.size(),j=0,n=0;
        if(a[0]=='-')
        {
            j=1;
        }
        if(b<0)
            b=b*(-1);
        for(;j<l;j++)
        {
            n=n*10+(a[j]-'0');
            n=n%b;
        }
        if(n==0)
            cout <<"divisible"<<endl;
        else
            cout <<"not divisible"<<endl;
    }
    return 0;
}
