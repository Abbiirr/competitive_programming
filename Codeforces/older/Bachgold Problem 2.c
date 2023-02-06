#include<stdio.h>
int main()
{
    int n,i,a,c=0,x;
    scanf("%d",&n);
    x=n;
    for(;;)
    {
        a=n-2;
        if(a==0)
        {
            c++;
            break;
        }
        if(a>=2)
        {
            c++;
        }
        else
        {
            a=n-3;
            c++;
        }
        if(a==0)
            break;
        n=a;

    }
    printf("%d\n",c);
    n=x;
    for(;;)
    {
        a=n-2;
        if(a==0)
        {
            printf("2 ");
            break;
        }
        if(a>=2)
        {
            printf("2 ");
        }
        else
        {
            printf("3 ");
            a=n-3;
        }
        if(a==0)
            break;
        n=a;

    }

    return 0;
}
