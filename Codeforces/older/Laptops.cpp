#include <bits/stdc++.h>
using namespace std;

void pair_sort(int a[],int b[],int n)
{
    int i;
    pair<int,int> pairt[n];
    for(i=0;i<n;i++)
    {
        pairt[i].first=a[i];
        pairt[i].second=b[i];
    }
    sort(pairt,pairt+n);
    for(i=0;i<n;i++)
    {
        a[i]=pairt[i].first;
        b[i]=pairt[i].second;
    }
}
int main()
{
    int n,i,p,q,x=2,j,t,f;
    cin >>n;
    int a[n],b[n];

    for(i=0;i<n;i++)
    {
        cin >>a[i]>>b[i];

    }
    pair_sort(a,b,n);
    for(i=1;i<n;i++)
    {
        if(b[i-1]>b[i])
        {
            cout << "Happy Alex";
            return 0;
        }
    }
   cout << "Poor Alex";
    return 0;
}
