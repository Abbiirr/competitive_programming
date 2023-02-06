#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n;
    cin >>n;

    int a[n],max_val,max_in=0,min_val,min_in=0;
    cin >>a[0];
    max_val = a[0], min_val = a[0];
    for(int i=1;i<n;i++)
    {
        cin >>a[i];
        if(max_val<a[i])
        {
            max_val= a[i];
            max_in = i;
        }
        if(min_val>=a[i])
        {
            min_val= a[i];
            min_in = i;
        }
    }
    

    int x = max_in - min_in + n - 1;
    if(max_in > min_in)
        x--;
    cout <<x;
    return 0;

}
