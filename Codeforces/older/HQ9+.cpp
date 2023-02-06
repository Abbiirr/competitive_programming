#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int i;
    char a[105];
    cin >>a;
    for(i=0;a[i]!=0;i++)
    {
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
        {
            cout <<"YES";
            return 0;
        }
    }
    cout <<"NO";
    return 0;
}
