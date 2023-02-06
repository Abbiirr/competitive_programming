//https://codeforces.com/contest/59/problem/A
#include<iostream>
#include<cmath>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    char a[102];
    int i,up=0,low=0;
    cin >>a;
    for(i=0;a[i]!=0;i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
            up++;
        else if(a[i]>='a'&&a[i]<='z')
            low++;
    }
    if(up>low)
    {
        for(i=0;i<100;i++)
        {
            if(a[i]>='a'&&a[i]<='z')
            {
                a[i]=a[i]-'a'+'A';
            }
        }
    }
    else
    {
        for(i=0;i<100;i++)
        {
            if(a[i]>='A'&&a[i]<='Z')
            {
                a[i]=a[i]-'A'+'a';
            }
        }
    }
    cout <<a;
    return 0;
}