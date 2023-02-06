#include<iostream>
using namespace std;
#include<cstdio>
#include<cmath>
int main()
{
    int n,i,j,x=0,y=0,k=0;
    double l;
    cin >>n;
    int r[n],b[n];
    for(i=0;i<n;i++)
    {
        cin >>r[i];
        if(r[i]==1)
            x++;
    }
    for(i=0;i<n;i++)
    {
        cin >>b[i];
        if(b[i]==1)
            y++;
        if(r[i]-b[i]==1)
        {
            k++;
        }
    }
    if(x==0)
        cout <<-1;
    else if(x>y)
        cout <<1;
    else if(k==0)
        cout <<-1;
    else
    {

       l=y-x+1+k;
       l=ceil(l/k);
       cout <<l;
    }
    return 0;
}
