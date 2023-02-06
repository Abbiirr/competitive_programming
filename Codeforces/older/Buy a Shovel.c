#include<stdio.h>
int main()
{
    int k,r,n,i;
    scanf("%d%d",&k,&r);
    for(i=1;;i++)
    {
        n=k*i;
        if(n%10==0)
            break;
        n=(k*i)-r;
        if(n%10==0)
            break;

    }
    printf("%d",i);
    return 0;
}
