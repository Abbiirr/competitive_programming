#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n,i,e=0,o=0,x=0;
    cin >>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >>a[i];
        if(a[i]%2==0)
        {
            e++;
        }
        else
            o++;
    }
    x=min(e,o);
    cout <<x;
    return 0;
}
