#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t;
    cin >>t;
    for(int i=0; i<t;i++)
    {
        int n, spy=-1;
        cin >>n;
        int a[n];
        vector< pair <int,int> > b;
        for(int j=0; j<n;j++)
        {
            cin >>a[j];
            b.push_back(make_pair(a[j], j));
        }
        sort(b.begin(),b.end());
        bool found = false;
        /*for(int j=0;j<n;j++)
        {
            //cout <<b[j].first<<" "<<b[j].second<<endl;
        }*/
        if(b[0].first!=b[1].first)
            cout <<b[0].second+1<<endl;
        else
            cout <<b[n-1].second+1<<endl;
        /*for(int j=1;j<n-1;j++)
        {
            if(b[j].first!=b[j-1].first&&b[j].first!=b[j+1].first)
                cout <<b[j].second+1<<endl;
        }*/

    }


    return 0;
}
