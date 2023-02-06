#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<string>
int main()
{
    int t;
    cin >>t;

    for(int i=0;i<t;i++)
    {
        int n,k;
        cin >>n>>k;
        int a[n],b[n],sum=0;
        for(int j=0;j<n;j++)
        {
            cin >>a[j];
            sum+=a[j];
        }
        sort(a, a+n);
        for(int j=0;j<n;j++)
        {
            cin >>b[j];
        }
        sort(b, b+n);
        for(int j=0,p=n-1;j<n&&p>-1&&k>0;j++)
        {
            if(a[j]<b[p] && k>0)
            {
                sum+=b[p]-a[j];
                k--;
                p--;
            }
        }

        cout <<sum<<endl;
        
    }
    
    return 0;
}
