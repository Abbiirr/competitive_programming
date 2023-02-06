#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int q,n,i,j,x=0,c=0,y=0;
    cin >>q;
    for(i=1;i<=q;i++)
    {
        cin >>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin >>a[j];
            if(a[j]==1)
                x=j;
        }
        bool okl=true, okr=true;
        for(j=1;j<n;j++)
        {
            okl &= (a[(x-j+n)%n]==j+1);
            okr &= (a[(x+j+n)%n]==j+1);
        }
        if(okl||okr)
            cout <<"YES"<<endl;
        else
            cout <<"NO"<<endl;
    }
    return 0;
}
