#include<stdio.h>
int main()
{
    int h,m,x,i,n,t;
    scanf("%d%d%d",&x,&h,&m);
    t=h*60+m;
    for(i=0;;i++)
    {
        h=t/60,m=t%60;
        if(h/10==7||h%10==7||m/10==7||m%10==7)
        {
            break;
        }
        t=(t-x+1440)%1440;
    }
    printf("%d",i);
    return 0;
}
