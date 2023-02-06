#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,n,x,v,i,j,k;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n>>x;
        int a;
        bool b[201]={0};
        for(j=0;j<=n+x;j++)
        {
            b[j]=false;
        }
        for(j=0;j<n;j++)
        {
            cin >>a;
            b[a]=true;
        }
        for(k=n+x;k>0;k--)
        {
            v=0;
            for(j=1;j<=k;j++)
            {
                if(!b[j])
                    v++;
            }
            if(v<=x)
            {
                cout <<k<<endl;
                break;
            }
        }

    }
    return 0;
}
