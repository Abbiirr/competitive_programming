#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,n,i;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        int a[2*n],j,odd=0,even=0;
        vector<int> od,ev;
        for(j=0;j<2*n;j++)
        {
            cin >>a[j];
            if(a[j]%2==0)
            {
                even++;
                ev.push_back(j+1);
            }
            else
            {
                odd++;
                od.push_back(j+1);
            }
        }
        vector<pair<int,int>> ans;
        for(j=0;j+1<od.size();j=j+2)
        {
            ans.push_back({od[j],od[j+1]});
        }
        for(j=0;j+1<ev.size();j=j+2)
        {
            ans.push_back({ev[j],ev[j+1]});
        }
        for(j=0;j<n-1;j++)
        {
            cout <<ans[j].first<<' '<<ans[j].second<<endl;
        }
        
    }
    return 0;
}