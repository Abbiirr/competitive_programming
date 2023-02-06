#include<stdio.h>
int main()
{
    int t,n,x1,y1,x2,y2,a,b,i,j,c=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        scanf("%d",&n);
        printf("Case %d:\n",i);
        for(j=1;j<=n;j++)
        {
            c=0;
            scanf("%d%d",&a,&b);

            if(a>=x1&&a<=x2)
            {
                c++;
            }
            if(b>=y1&&b<=y2)
            {
                c++;
            }
            if(c==2)
            {
                printf("Yes\n");
            }
            else
                printf("No\n");

            }

        }

    return 0;
}
