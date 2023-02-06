#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,m,i,j,x;
    cin >>n>>m;
    char a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin >>a[i][j];
            if(i%2==0)
            {
                if(j%2==0&a[i][j]=='.')
                {
                    a[i][j]='W';
                }
                else if(a[i][j]=='.')
                    a[i][j]='B';
            }
            else
            {
                if(j%2==0&a[i][j]=='.')
                {
                    a[i][j]='B';
                }
                else if(a[i][j]=='.')
                    a[i][j]='W';
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout <<a[i][j];
        }
        cout <<endl;
    }
    return 0;
}
