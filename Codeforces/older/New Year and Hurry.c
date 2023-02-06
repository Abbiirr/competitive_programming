#include<stdio.h>
int main()
{
    int n,k,i,t;
    scanf("%d%d",&n,&k);
    t=240-k;
    for(i=1;i<=n;i++)
    {
        t=t-i*5;
        if(t<0)
            break;
    }
    printf("%d",i-1);
    return 0;
}
