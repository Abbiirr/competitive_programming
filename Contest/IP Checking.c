#include<stdio.h>
int main()
{
    int n,r=0,x=0,i;
    char a,b,c,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %c",&a);
        if(a=='.')
            scanf("%c",&a);
            b=a;
        while(b!=0)
        {
            r=a%2;
            x=x*10+r;
            b=b/2;
        }
        printf("%d",x);
    }
    return 0;

}
