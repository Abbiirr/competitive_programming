#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<vector>
#define PI			2*acos(0.0)
int main()
{
    long long int n,k,i,j;
    vector<long long int>a;
    cin >>n>>k;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            a.push_back(i);
            if(n/i!=i)
                a.push_back(n/i);
        }
    }
    sort(a.begin(),a.end());
    //cout <<a.size()<<endl;
    if(a.size()<k)
        cout <<-1;
    else
        cout <<a[k-1];
    return 0;
}
