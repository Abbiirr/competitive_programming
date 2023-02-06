#include<stdio.h>
int main()
{
    int t,a,b,c,d,k,n=0,i,x,y;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&k);
        if(a%c==0)
        {
            x=(a/c);
        }
        else
        {
            x=(a/c)+1;
        }
        if(b%d==0)
        {
            y=(b/d);
        }
        else
        {
            y=(b/d)+1;
        }
        if(x+y>k)
            printf("-1\n");
        else
        {
            printf("%d %d\n",x,y);
        }
    }
    return 0;
}
