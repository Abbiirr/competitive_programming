#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    long long int n;
    cin >>n;
    long long int a[n];
    long long int dp[100005] = {0};
    for(long long int i=0;i<n;i++)
    {
        cin >>a[i];
        dp[a[i]]++;
    }
    sort(a, a+n);
    for(long long int i=1;i<100005;i++)
    {
        dp[i]+=dp[i-1];

    }
    long long int q;
    cin >>q;
    for(int i=0;i<q;i++)
    {
        long long int x,y=0;
        cin>>x;
        if(x>=a[n-1])
            y=n;
        else if(x<a[0])
            y=0;
        else
            y = dp[x];

        cout <<y<<endl;
    }



    return 0;
}
