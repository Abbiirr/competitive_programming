#include<stdio.h>
int main()
{
    int a,b,c,x,y,z,j;
    scanf("%d%d%d",&a,&b,&c);
    x=a*b*c;
    y=(a+b)*c;
    z=a*(b+c);
    j=a+b+c;
    if(x>=y&&x>=z&&x>=j)
        printf("%d",x);
    else if(y>=x&&y>=z&&y>=j)
        printf("%d",y);
    else if(z>=y&&z>=x&&z>=j)
        printf("%d",z);
    else if(j>=y&&j>=z&&j>=x)
        printf("%d",j);
    else
        printf("%d",x);
    return 0;
}
