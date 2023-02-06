#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int a[3],b[3],n,i;
    double x=0,y=0;
    for(i=0;i<3;i++)
    {
        cin >>a[i];
        x=x+a[i];
    }
    for(i=0;i<3;i++)
    {
        cin >>b[i];
        y=y+b[i];
    }
    cin >>n;
    x=ceil(x/5);
    y=ceil(y/10);
    if(n>=x+y)
    {
        cout <<"YES";
    }
    else
        cout <<"NO";
    return 0;

}
