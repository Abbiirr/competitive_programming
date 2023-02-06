#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int n,i,c=1,x=1;
    cin >>n;
    int a[n];
    cin >>a[0];
    for(i=1;i<n;i++)
    {
        cin >>a[i];
        if(a[i]>a[i-1])
        {
            c++;
        }
        if(c>x)
        {
            x=c;
        }

        if(a[i]<=a[i-1])
        {
            c=1;
        }

    }
    cout <<x;
    return 0;
}
