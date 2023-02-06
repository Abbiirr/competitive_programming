#include<iostream>
#include<cstdio>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,i,n;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        string a;
        cin >>n;
        int x=0,p=1,j;
        while(n)
        {
            if(n&1) a +='1';
            else
                a+='0';
            n /=2;
        }
        a +='0';
        reverse(a.begin(),a.end());
        next_permutation(a.begin(),a.end());
        reverse(a.begin(),a.end());
        for(j=0;j<a.size();j++)
        {
            if(a[j]=='1') x +=p;
            p *=2;
        }
        cout <<"Case "<<i<<": ";
        cout <<x<<endl;
    }
    return 0;
}
