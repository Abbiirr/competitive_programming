#include <bits/stdc++.h>
using namespace std;
#include<cmath>
int main()
{
    long long int x,y,n=0,z,a,b,t,i;

    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>x>>y>>a>>b;
        if(x>0&&y>0)
        {
            if(2*a*min(x,y)<b*min(x,y))
            {
                n=(x+y)*a;
            }
            else
                n=min(x,y)*b+max(x-min(x,y),y-min(x,y))*a;
        }
        else if(x<0&&y<0)
        {
        x=abs(x),y=abs(y);
        if(2*a*min(x,y)<b*min(x,y))
        {
                n=(x+y)*a;
        }
        else
            n=min(x,y)*b+max(x-min(x,y),y-min(x,y))*a;
        }
        else
        {
        n=abs(x)+abs(y);
        n=n*a;
        }
        cout <<n<<"\n";
    }

    return 0;

}
