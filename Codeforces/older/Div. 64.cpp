#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int c=0,i,x=0,pow=1;
    char a[105];
    cin >>a;
    for(i=0;a[i]!=0;i++)
    {
        if(c==0&&a[i]=='1')
            c++;
        else if(c>0&&a[i]=='0')
        {
            c++;
        }
    }
    if(c>=7)
    {
        cout <<"Yes";
    }
    else
        cout <<"No";
    return 0;
}
