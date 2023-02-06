#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,i,j,x=0;
    string a,b;
    cin >>n;
    for(i=1;i<=n;i++)
    {
       if(x!=0)
       {
           cin >>a;
           if(a==b)
           {
               x++;
           }
           else
           {
               x--;
           }
       }
       else
       {
           cin >>b;
           x=1;
       }

    }
    cout <<b;
    return 0;
}
