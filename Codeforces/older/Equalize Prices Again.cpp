#include<iostream>
using namespace std;
#include<cstdio>
#include<cmath>
int main()
{
    int   q,n,i,j,x;
    double sum;
    cin >>q;
    for(i=0;i<q;i++)
    {
        cin >>n;
        int a[n];
        sum=0;
        for(j=0;j<n;j++)
        {
            cin >>a[j];
            sum=sum+a[j];
        }
       x=ceil(sum/n);
        cout <<x<<"\n";
    }
    return 0;
}
