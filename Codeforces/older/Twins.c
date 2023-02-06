#include<stdio.h>
int main()
{
    int n,i,a,sum=0,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        sum=sum+a;
    }
    b=(sum/2)-1;
    if(sum%2==0)

    printf("%d",b);
    else if(sum==2)
    {
        printf("1");
    }
    else printf("2");
    return 0;
}
