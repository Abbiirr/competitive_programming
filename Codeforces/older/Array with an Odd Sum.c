#include<stdio.h>
int main()
{
    int a,i,t,n,sum,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a);
            sum=sum+a;
        }
        if(sum%2==0)
            printf("NO\n");
        else
            printf("YES\n");

    }
    return 0;
}
