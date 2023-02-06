#include<stdio.h>
int main()
{
    int t,n,i,j,x,y=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        x=a[0];
        for(j=1;j<n;j++)
        {
            if(a[j]<x)
                x=a[j];
        }
        for(j=0;;j++)
        {
            if(j==n)
            {
                printf("YES\n");
                break;
            }
            y=a[j]-x;
            if(y%2!=0&&y!=0)
            {
                printf("NO\n");
                break;
            }
        }
    }
    return 0;
}
