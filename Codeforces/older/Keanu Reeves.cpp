#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,k,i,j,one=0,ext=0;
    cin >>n;
    char a[n+1],b[n];
    cin >>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='1')
            one++;
    }
    ext=n-one;
    if(ext != one)
    {
        cout << 1 << endl;
        cout << a << endl;
    }
    else
    {
        cout << 2 << endl;
        cout << a[0] << " " ;
        for(i=1;i<n;i++)
        {
            cout <<a[i];
        }
        cout <<endl;
    }
    return 0;

}
