#include<stdio.h>
int main()
{
    int n,a,b,i,sum=0,x=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        sum=sum-a+b;
        if(sum>x)
            x=sum;
    }
    printf("%d",x);
    return 0;
}
