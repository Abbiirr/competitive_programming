#include<stdio.h>
int main()
{
    int a,b,c,n,x=0,t,i,y;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&n);
        if(a>b)
            x+=a-b;
        else
            x+=b-a;
        if(b>c)
            x+=b-c;
        else
            x+=c-b;
        if(a>c)
            x+=a-c;
        else
            x+=c-a;
        y=n-x;
        if(x==n)
            printf("Yes\n");
        else if(y%3==0)
            printf("Yes\n");
        else
            printf("No\n");
        printf("%d",y);
    }
    return 0;
}
