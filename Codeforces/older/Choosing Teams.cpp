#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int n,k,i,j,c=0,t=0;
    cin >>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >>a[i];
        if(a[i]+k<=5)
        {
            c++;
        }
        if(c==3)
        {
            c=0;
            t++;
        }
    }
    cout <<t;
    return 0;
}
