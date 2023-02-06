#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n;
    cin >>n;
    int h[n],a[n],count=0;
    cin >>h[0]>>a[0];
    for(int i=1;i<n;i++)
    {
        cin >>h[i]>>a[i];
        
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n;j++)
        {
            if(h[j]==a[i])
                count++;
        }
    }
    cout <<count;
    
    return 0;
}
