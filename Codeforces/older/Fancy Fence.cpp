#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,a,i;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>a;
        a=180-a;
        if(360%a==0)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
    return 0;
}
