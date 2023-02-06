#include<stdio.h>
int main()
{
    int t,h,m,i,x;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&h,&m);
        x=(23-h)*60;
        x=x+(60-m);
        printf("%d\n",x);
    }
    return 0;
}
