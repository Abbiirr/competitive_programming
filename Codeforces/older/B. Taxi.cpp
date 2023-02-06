#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI          2*acos(0.0)
int main()
{
    int n;
    cin >>n;
    int i, a[n], n1=0,n2=0,n3=0, c=0, sum=0;
    for(i=0; i<n;i++)
    {
        cin >>a[i];
        if(a[i]==4)
        {
            c++;
        }
        else if(a[i]==3)
        {
            n3++;
            c++;
        }
        else if(a[i]==2)
        {
            n2++;
            
        }
        else if(a[i]==1)
        {
            n1++;
            
        }
    }
    c = c+  (n2/2);
    n2 = n2%2;
    n1=n1-n3;
    if(n1>0&&n2==1)
    {
        c++;
        n2=0;
        n1 -=2;
    }
    else if(n2==1)
    {
        c++;
    }
    if(n1>0)
    {
        c += n1/4;
        n1 = n1%4;
    }
    if(n1>0)
        c++;

    cout <<c<<endl;
    return 0;
}
