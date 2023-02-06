#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<string>
#define PI          2*acos(0.0)

int main()
{
    string a,b;
    int x,y, c=0;
    cin >>a>>b;
    for(int i =0; a[i]!=0&&b[i]!=0;i++)
    {
        c = ((int)(a[i]))^((int)(b[i]));
        cout <<c;
    }

    return 0;
}
