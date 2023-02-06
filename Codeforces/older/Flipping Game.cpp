#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,i,x=0,c=0,d=-1;
    cin >>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >>a[i];
        if(a[i]==1)
        {
            x++;
            if(c>0)
            {
                c--;
            }
        }
        else
        {
            c++;
            if(c>d)
                d=c;
        }
    }
    if(d==0)
    {
        cout <<0;
    }
    else
    cout <<x+d;
    return 0;
}
