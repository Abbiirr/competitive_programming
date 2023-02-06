#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    long long int n,i,p,q,x=2,j,t,f;
    cin >>n;
    int a[n],b[n];

    for(i=0;i<n;i++)
    {
        cin >>a[i]>>b[i];

    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j]&&b[i]>b[j])
            {
                cout << "Happy Alex";
                return 0;
            }
        }
    }
    cout << "Poor Alex";
    return 0;
}

