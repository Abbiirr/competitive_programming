#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t,n,m,i,j,k;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n>>m;
        for(j=1;j<=n;j++)
        {
            if(j==1)
            {
                cout <<"W";
                for(k=2;k<=m;k++)
                {
                    cout <<"B";
                }

            }
            else
                for(k=1;k<=m;k++)
                {
                    cout <<"B";
                }
            cout <<"\n";

        }


    }
    return 0;
}
