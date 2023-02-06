#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int i,x,c=0;
    string a;
    cin >>a;
    //a='#'+a;
    c=a.find('0');
    if(c==-1)
        cout <<a.substr(1);
    else
    {
        cout <<a.substr(0,c)<<a.substr(c+1);
    }
    return 0;

}
