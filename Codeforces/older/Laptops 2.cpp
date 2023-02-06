#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int n,i,p,q,x=2;
    cin >>n;
    int a[n],b[n];
    cin >>a[0]>>b[0];
    for(i=1;i<n;i++)
    {
        cin >>a[i]>>b[i];
        p=a[i]-a[i-1];
        q=b[i-1]-b[i];
        if(p>0&&q>0)
        {
            x=1;
        }
        else if(p<0&&q<0)
        {
            x=1;
        }
    }
    if(x==1)
    {
       cout << "Happy Alex";
    }
    else if(x==2)
    {
        cout << "Poor Alex";
    }
}
