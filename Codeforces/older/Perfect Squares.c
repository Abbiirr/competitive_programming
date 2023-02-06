#include<stdio.h>
int main()
{
    int t,n,x,i,y=-1000000,p;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(n>=0)
        {
            x=sqrt(n);
            if(n!=x*x&&n>y)
                y=n;
        }
        else if(n<0)
        {
            if(n>y)
                y=n;
        }

    }
    printf("%d",y);
    return 0;
}
