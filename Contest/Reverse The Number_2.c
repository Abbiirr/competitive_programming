#include<stdio.h>
int main()
{
    int T,n,i,a,b;
    char j,k,l;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&n);
        b=n;
        while(b%10==0)
        {
            b=b/10;
        }
        while(b+10>10)
        {
           a=b%10;
           printf("%d",a);

           b=b/10;
        }
        printf("\n");
    }
    return 0;
}
