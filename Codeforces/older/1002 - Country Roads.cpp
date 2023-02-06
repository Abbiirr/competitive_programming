#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t,n,m,i,j,x,k;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n>>m;
        int a[m]={INT_MIN},b[m]={INT_MIN},c[m]={INT_MIN},d[n],z=0;
        for(j=0;j<n;j++)
        {
            b[j]=-1;
        }
        for(j=0;j<m;j++)
        {
            cin >>a[i]>>b[i]>>c[m];

        }
        cin >>x;
        cout <<"Case "<<t<<":\n";
        for(j=0;j<m-1;j++)
        {
            if(a[j]==-1)
            {
                continue;
            }
            d[z]=c[j];
           for(k=i+1;k<m;k--)
            {
                if(a[j]==a[k]&&b[j]==b[k])
                {
                    a[k]=-1,b[k]=-1;
                    if(c[j]>c[k])
                    {
                        d[z]=c[k];
                    }
                }
            }
            if(d[z]==-1)
            {
                cout <<"Impossible\n";
            }
            else
                cout <<z<<"\n";
            z++;
        }

    }
    return 0;
}
