#include<stdio.h>
int main()
{
    int t,a,b,n=0,f,h,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        a=a-1;
        f=(a/3)*2;
        if(a%3==2)
            f=f+1;
        h=(b/3)*2;
        if(b%3==2)
            h=h+1;
        n=h-f;
        printf("Case %d: %d\n",i,n);
    }
    return 0;
}
