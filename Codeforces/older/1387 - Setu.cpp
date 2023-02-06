#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI          2*acos(0.0)
int main()
{
    int t,i,x,n,j;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        cout <<"Case "<<i<<":"<<endl;
        int sum=0;
        string a;
        for(j=1;j<=n;j++)
        {
            cin >>a;
            if(a=="donate")
            {
                cin >>x;
                sum +=x;
            }
            else
                cout <<sum<<endl;
        }
    }
    return 0;
}
