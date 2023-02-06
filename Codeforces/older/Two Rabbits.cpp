#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int t,x,y,a,b,i,j,c=0;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>x>>y>>a>>b;
        c=y-x;
        if(c%(a+b)==0)
        {
            c=c/(a+b);
            cout <<c<<"\n";
        }
        else
        {
            cout <<-1<<"\n";
        }

        /*for(j=1;;j++)
        {
            x=x+a;
            y=y-b;
            if(x==y)
            {
                cout <<j<<"\n";
                break;
            }
            else if(x>y)
            {
                cout <<-1<<"\n";
                break;
            }
        }*/
    }
}
