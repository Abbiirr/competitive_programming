#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,k;
    cin >>n>>k;
    int a[n],i,even=0,odd=0;
    for(i=0;i<n;i++)
    {
        cin >>a[i];
        if(even==0&&a[i]%2==0)
        {
            even++;
        }
        if(odd==0&&a[i]%2!=0)
        {
            odd++;
        }

    }
    sort(a,a+n);
    if(k>a[n-1])
    {
        cout <<"IMPOSSIBLE";
    }
    else if((odd==0||even==0)&&k%2!=0)
    {
        cout <<"IMPOSSIBLE";
    }
    else
    {
        cout <<"POSSIBLE";
    }
    return 0;
    
}