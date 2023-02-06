//https://codeforces.com/contest/1108/problem/B
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,i;
    cin >>n;
    int a[n],mx=0,y=0;
    for(i=0;i<n;i++)
    {
        cin >>a[i];
        mx=max(mx,a[i]);  //stores the values in multiset
    } 
     //determines the maximum element
     sort(a,a+n);
     
    for(i=2;i<n;i++)
    {
        if(a[n-1]%a[i]!=0)  //checks which are divisors of mx
        {
            y=max(y,a[i]);
        }
    }
    if(y==0)
        y=a[n-1];
    cout <<mx<<' '<<y;  //*mset.rbegin() is the highest value which is not a divisor of mx. Thus, it is other ans
    return 0;
}