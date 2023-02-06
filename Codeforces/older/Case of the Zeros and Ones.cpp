#include<iostream>
using namespace std;
#include<cstdio>
#include<cmath>

int main()
{
    int n,i,l=0,o=0,x=0;
    cin >>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%1d",&a[i]);
        if(a[i]==1)
            l++;
        else if(a[i]==0)
            o++;
    }
    x=l+o-2*min(l,o);
    cout <<x;
    return 0;
}
