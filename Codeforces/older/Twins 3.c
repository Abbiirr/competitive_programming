#include<stdio.h>
int main()
{
    int n,i,j,x,tsum=0,sum1=0,sum2=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        tsum=tsum+a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
    for(i=n-1;i>=0;i--)
    {
        sum1=sum1+a[i];
        sum2=tsum-sum1;
        if(sum1>sum2)
        {
            c++;
            break;
        }
        c++;
    }
    printf("%d",c);
    return 0;
}
