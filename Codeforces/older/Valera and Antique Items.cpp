#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,v,p,k,a,i,x=0,j,c=0,l=0;
    cin >>n>>v;
    int b[n]={0};
    for(i=1;i<=n;i++)
    {
        cin >>k;
        c=0;
        for(j=1;j<=k;j++)
        {
            cin >>a;
            if(c==0&&a<v)
            {

                x++;
                c=1;
                b[l]=i;
                l++;
            }
        }

    }
    cout <<x<<endl;
    for(i=0;i<l;i++)
    {
        cout <<b[i]<<' ';
    }
    return 0;
}
