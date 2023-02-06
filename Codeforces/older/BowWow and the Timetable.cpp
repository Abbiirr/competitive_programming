#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    long long int n,r,d=0,i,x=0,y=0;
    string a;
    cin >>a;
    n=a.size();
    x=n/2+n%2;
    for(i=1;i<n;i++)
    {
        if(a[i]!='0')
        {
            y++;
            break;
        }
    }
    if(y==0&&n%2)
        x--;
    cout <<x;
    return 0;
}
