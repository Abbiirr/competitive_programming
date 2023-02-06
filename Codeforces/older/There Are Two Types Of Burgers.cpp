#include<iostream>
using namespace std;
#include<cstdio>
#include<cmath>
int main()
{
    int t,b,p,f,h,c,x,y,i,z=0;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        x=0,y=0,z=0;
        cin >>b>>p>>f>>h>>c;
        b=b/2;
        if(b==0)
        {
            cout <<0<<"\n";
        }
        else if(h>c)
        {
            if(p>=b)
            {
                x=b;
            }
            else
            {
                x=p;
                b=b-p;
                if(f>=b)
                {
                    y=b;
                }
                else
                {
                    y=f;
                }
            }
            z=x*h+y*c;
            cout <<z<<"\n";
        }
        else
        {
            if(f>=b)
            {
                y=b;
            }
            else
            {
                y=f;
                b=b-f;
                if(p>=b)
                {
                    x=b;
                }
                else
                {
                    x=p;
                }
            }
            z=x*h+y*c;
            cout <<z<<"\n";
        }
    }
    return 0;
}
