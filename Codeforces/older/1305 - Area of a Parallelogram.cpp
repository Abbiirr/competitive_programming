#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,i,ax,bx,cx,dx,ay,by,cy,dy,area;



    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
    scanf("%d %d %d %d %d %d",&ax,&ay,&bx,&by,&cx,&cy);

    dx=ax+cx-bx;
    dy=ay+cy-by;

    area=((ax*by)-(ay*bx)+(bx*cy)-(by*cx)+(cx*dy)-(cy*dx)+(dx*ay)-(dy*ax))/2;

    printf("Case %d: %d %d %d\n",i,dx,dy,abs(area));
    }


    return 0;
}
