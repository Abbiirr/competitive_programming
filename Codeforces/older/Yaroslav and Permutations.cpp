#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n,i,j,d,c=1,x=0;
    cin >>n;
    d=n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >>a[i];

    }
    sort(a,a+n);

    for(i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
        {
            c++;
            if(c>x)
                x=c;
        }
        else
            c=1;


    }
    //cout <<x<<"\n";
    if(x<=(n+1)/2)
    {
        cout <<"YES";
    }
    else
        cout <<"NO";
    return 0;
}
