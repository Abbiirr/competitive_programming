#include<stdio.h>
int main()
{
    int n,k,c=0,i,sum=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        if(sum>8)
        {
            c=c+8;
            sum=sum-8;
        }
        else
        {
            c=c+sum;
            sum=0;
        }
        if(c>=k)
        {
            printf("%d",i+1);
            break;
        }

    }
    if(c<k)
        printf("-1");
    return 0;
}
