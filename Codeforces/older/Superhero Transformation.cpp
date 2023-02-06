#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int i;
    string a,b;
    cin >>a>>b;
    if(a.size()!=b.size())
    {
        cout <<"NO";
        return 0;
    }
    for(i=0;i<a.size()&&i<b.size();i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
            {
                continue;
            }
            else
            {
                cout <<"NO";
                return 0;
            }
        }
        else
        {
            if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
            {
                cout <<"NO";
                return 0;
            }
        }
    }
    cout <<"YES";
    return 0;
}
