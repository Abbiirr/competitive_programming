#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI          2*acos(0.0)
int main()
{
    int t,n,i,j;
    char name[102][25];
    cin >>t;
    for(i=1;i<=t;i++)
    {
        vector<int>v,u;
        cin >>n;
        int l,w,h;
        for(j=0;j<n;j++)
        {
            cin >>name[j]>>l>>w>>h;
            v.push_back(l*w*h);
            u.push_back(v[j]);
        }
        l=v.size();
        sort(u.begin(),u.end());
        cout <<"Case "<<i<<": ";
        if(u[0]==u[l-1])
        {
            cout <<"no thief"<<endl;
        }
        else
        {
            vector<int>::iterator it;
            it= find(v.begin(),v.end(),u[l-1]);
            w=it-v.begin();
            it= find(v.begin(),v.end(),u[0]);
            l=it-v.begin();
            cout <<name[w]<<" took chocolate from "<<name[l]<<endl;
        }
    }
    return 0;
}
