#include<iostream>
#include<string.h>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
#define SP(x,y)                 fixed<<setprecision((y))<<(x)
int main()
{
    char a[100005],*p;
    cin >>a;
    if((p = strstr(a, "AB")) && strstr(p + 2,"BA")) cout <<"YES";
    else if((p = strstr(a, "BA")) && strstr(p + 2,"AB")) cout <<"YES";
    else
    cout <<"NO";
    return 0;
}
