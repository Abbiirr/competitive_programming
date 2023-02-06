#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n1,n2,k,m,i,x,y;
    cin >>n1>>n2;
    int a[n1],b[n2];
    cin >>k>>m;
    for(i=0;i<n1;i++)
    {
        cin >>a[i];
    }
    for(i=0;i<n2;i++)
    {
        cin >>b[i];
    }
    x=a[k-1];
    y=b[n2-m];
    //cout <<x<<' '<<y<<endl;
    if(x<y)
        cout  <<"YES";
    else
        cout <<"NO";
    return 0;
}
