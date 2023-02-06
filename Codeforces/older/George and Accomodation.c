#include<stdio.h>
int main()
{
    int n,i,r,c,p,x=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&p,&c);
        r=c-p;
        if(r>=2)
            x++;

    }
    printf("%d",x);
    return 0;
}
