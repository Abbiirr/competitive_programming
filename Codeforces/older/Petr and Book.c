#include<stdio.h>
int main()
{
    int n,a[7],i;
    scanf("%d",&n);
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;n>0;i++)
    {
        if(i==7)
        {
            i=0;
        }
        n=n-a[i];
    }
    printf("%d",i);
    return 0;
}
