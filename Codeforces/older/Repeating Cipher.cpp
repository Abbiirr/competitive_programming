#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n,i,j=0;
    cin >>n;
    char a[n],b[n];
    cin >>a;
    for(i=0,j=0;i<n;i++,j++)
    {
        cout <<a[i];
        i=i+j;
    }
    return 0;
}
