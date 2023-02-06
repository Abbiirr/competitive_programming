#include<stdio.h>
int main()
{
    int n,i,a=0,x;
    scanf("%d",&n);
    x=n;
    if(n>3||n==2)
    {
        n=n-2;
        a++;
    }


    for(i=2;n!=0;)
    {
        if(n%i==0)
        {
            n=n-i;
            a++;
        }
        else if(n%i!=0)
            i++;

    }
    printf("%d\n",a);
    if(x>3||x==2)
    {
        n=x-2;
        printf("2 ");
    }
    else
    {
        n=x;
    }

    for(i=2;n!=0;)
    {
        if(n%i==0)
        {
            n=n-i;
            printf("%d ",i);
        }
        else
            i++;


    }
    return 0;
}
