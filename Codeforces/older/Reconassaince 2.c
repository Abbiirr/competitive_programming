#include<stdio.h>
int main()
{
    int n,i,x=100000,y1,y2,d,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            d=a[i]-a[j];
            d=abs(d);
            if(d<x)
            {
                x=d;
                y1=i,y2=j;
            }
        }
    }
    printf("%d %d",y1+1,y2+1);
    return 0;
}
