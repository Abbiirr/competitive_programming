#include<stdio.h>
int main()
{
    int sum=0,n,i,a;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        sum=sum+a;
    }
    if(sum>0)
        printf("hard");
    else
        printf("easy");
    return 0;
}
