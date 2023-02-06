#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int a1,a2,a3,a4,x=0,i;
    char s[100005];
    cin >>a1>>a2>>a3>>a4>>s;
    for(i=0;s[i]!=0;i++)
    {
        if(s[i]=='1')
        {
            x +=a1;
        }
        else if(s[i]=='2')
        {
            x +=a2;
        }
        else if(s[i]=='3')
        {
            x +=a3;
        }
        else if(s[i]=='4')
        {
            x +=a4;
        }
    }
    cout <<x;
    return 0;
}
