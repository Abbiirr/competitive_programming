#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,i,j;
    cin >>n;
    string a;
    set<char> x,y;
    for(i=0;i<n;i++)
    {
        cin >>a;

        for(j=0;j<n;j++)
        {
            if(j==i||i+j==n-1)
            {
                x.insert(a[j]);
            }
            else
            {
                y.insert(a[j]);
            }

        }
    }
        if(x.size()==1&&y.size()==1&&*x.begin()!=*y.begin())
            cout <<"YES";
        else
            cout <<"NO";
    return 0;
}
