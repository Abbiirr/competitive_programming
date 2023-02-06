#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin >>n;
        int a[n];
        bool pos=true;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a, a+n);
        for(int j=1;j<n;j++)
        {
            if(a[j]-a[j-1]>1)
            {
                pos= false;
                break;
            }
        }
        if(pos==true)
            cout <<"YES"<<endl;
        else
            cout <<"NO"<<endl;

    }
    return 0;
}
