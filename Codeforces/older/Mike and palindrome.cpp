#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int c=0,i,l,j;
    double x;
    string a;
    cin >>a;
    a='#'+a;
    l=a.size()-1;
    for(i=1;i+i<=l;i++)
    {
        //cout <<a[i]<<' '<<a[j]<<endl;
        if(a[i]!=a[l-i+1])
        {
            c++;
        }
        if(c==2)
        {
            cout <<"NO";
            return 0;
        }

    }
    if(c==1)
        cout <<"YES";
    else if(c==0 &(l&1))
        cout <<"YES";
    else
        cout <<"NO";
    return 0;
}
