#include<stdio.h>
int main()
{
    int n,i,c=0,b=0;
    scanf("%d",&n);
    for(i=1;;i++)
    {
        b=b+i;
        n=n-b;
        if(n<=0)
            break;

    }
    if(n==0)
    printf("%d",i);
    else if(n<0)
        printf("%d",i-1);
    return 0;
}
