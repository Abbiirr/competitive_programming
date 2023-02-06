#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int x=-1,i,c=1,l,y1,y2;
    string a,b;
    cin >>a>>b;
    if(a==b)
    {
        cout <<-1;
        return 0;
    }
    else
    {
        x=max(a.size(),b.size());
    }
    cout <<x;
    return 0;
}
