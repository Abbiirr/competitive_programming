#include<stdio.h>
int main()
{
    int t,n,i,c,a,j,k,sum;
    scanf("%d",&t);
    int b[t];
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%d",&n);
        scanf("%d",&c);
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a);
            sum=sum+a;
        }
        if(sum<=c)
        {
            b[i]=1;
        }
        else
        {
            b[i]=0;
        }

    }
    for(k=1;k<=t;k++)
    {
        if(b[k]==1)
    {
        printf("Yes\n");
    }
    else if(b[k]==0)
    {
        printf("No\n");
    }
    }

    return 0;
}
