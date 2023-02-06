#include<iostream>
using namespace std;
#include<cstdio>
#include<cmath>
int main()
{
    int n,i,a=0,b=0,c=0,x;
    cin >>n;
    int s[n],k[n],l[n],m[n];
    for(i=0;i<n;i++)
    {
        cin >>s[i];
        if(s[i]==1)
        {
            k[a]=i+1;
            a++;

        }
        else if(s[i]==2)
        {
            l[b]=i+1;
            b++;
        }
        else if(s[i]==3)
        {
            m[c]=i+1;
            c++;

        }
    }
    x=min(min(a,b),c);
    cout <<x<<"\n";
    if(x!=0)
    {
       for(i=0;i<x;i++)
    {
        cout <<k[i]<<' '<<l[i]<<' '<<m[i]<<"\n";
    }

    }

    return 0;
}
