#include<iostream>
using namespace std;
#include<cstdio>
#include<cmath>
int main()
{
    int t,a,b,x,i,c;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>a>>b;
        x=abs(a-b);
        c=0;
        if(x>0)
        {

            c=c+x/5;
            x=x%5;
        }
        if(x>0)
        {

            c=c+x/2;
            x=x%2;
        }
        if(x>0)
        {

            c=c+x;
            x=0;
        }
        cout <<c<<"\n";
    }
}
