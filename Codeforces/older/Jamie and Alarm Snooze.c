#include<stdio.h>
int main()
{
    int x,h,m,a,y;
    scanf("%d%d%d",&x,&h,&m);
    if(m%10==7)
    {
        printf("0");
        return 0;
    }
    else if((m-x)<0)
    {
        m=m+60;
        h=h-1;
    }
        m=m-x;

    a=m;
    while(a%10!=7)
    {
        a--;
    }
    y=ceil((m-a)/x);
    printf("%d",y+1);
    return 0;
}
