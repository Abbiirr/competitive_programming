#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI          2*acos(0.0)
int main()
{
    int t,i,j,l,c,k;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        string a;
        cin >>a;
        c=0;
        cout <<"Case "<<i<<": ";
        l=a.size();
        for(j=0,k=l-1;j<l/2;j++,k--)
        {

            if(a[j]!=a[k])
            {
                c=1;
                break;
            }
        }
        if(!c)
            cout <<"Yes"<<endl;
        else
            cout <<"No"<<endl;
    }
    return 0;
}
