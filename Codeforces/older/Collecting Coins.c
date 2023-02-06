#include<stdio.h>
int main()
{
    int a,b,c,n,x,y,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&n);
        x=a+b+c+n;
        y=x/3;
        if(x%3==0)
        {
            if(y>=a&&y>=b&&y>=c)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("NO\n");
    }

    return 0;
}
