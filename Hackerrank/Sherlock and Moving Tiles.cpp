#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<string>
#define  ll long long
#define  ull unsigned long long
#define  lld long long double

int main()
{
    long double l, s1,s2, t;
    long long  q;
    cin >>l>>s1>>s2>>q;
    long double a[q];
    cout.precision(20);
    for(int i=0;i<q;i++)
    {
        cin>>a[i];
        t = (sqrt(2)*(l-sqrt(a[i])))/(abs(s1-s2));
        cout <<t<<fixed<<endl;
    }


    return 0;
}
