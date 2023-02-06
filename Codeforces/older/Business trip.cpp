#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int k,a[12],x=0,i;
    cin >>k;
    for(i=0;i<12;i++)
    {
        cin >>a[i];
    }
    if(k==0)
    {
        cout <<0;
        return 0;
    }
    sort(a,a+12);
    for(i=11;i>=0;i--)
    {
        //cout <<a[i]<<endl;
        x=x+a[i];
        if(x>=k)
        {
            break;
        }
    }
    //cout <<x<<endl;
    if(x>=k)
        cout <<12-i;
    else
        cout <<-1;
    return 0;
}
