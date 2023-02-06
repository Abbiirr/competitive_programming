#include<stdio.h>
int main()
{
    int t,n,m,j,i,sum;
    double avg;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%d%d",&n,&m);
        int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            sum=sum+a[j];
        }
        avg=sum/n;
        if(m>=sum)
            printf("%d\n",sum);
        else
            printf("%d\n",m);
    }
    return 0;
}
