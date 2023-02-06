#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,b,d,sum=0,x=0,i,a;
    cin >>n>>b>>d;
    for(i=1;i<=n;i++)
    {
        cin >>a;
        if(a<=b)
            sum=sum+a;
        if(sum>d)
        {
            x++;
            sum=0;
        }
    }
    cout <<x;
    return 0;
}
