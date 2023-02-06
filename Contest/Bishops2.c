#include<stdio.h>
int main()
{
    int t,i,r1,r2,c1,c2,a,b,x;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
        x=r1+r2+c1+c2;
        printf("Case %d: ",i);
        if(r1==r2&&c1==c2)
        {
            printf("0");
        }
        else if(x%2==0)
        {
            a=abs(c1-c2);
            b=abs(r1-r2);
            if(a==b)
                printf("1");
            else
                printf("2");
        }
        else
        {
            printf("impossible");
        }
    }
    return 0;
}
