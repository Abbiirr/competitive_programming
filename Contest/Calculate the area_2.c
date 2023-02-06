#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d",&n);
    if(n==1)
    {
        printf("1 1");
    }
    else
    {
        for(i=2;i<=n;i++)
    {

        a=n/i;
        if(n%i==0)
        {

            printf("%d %d\n",a,i);
            break;
        }
    }

    }

    return 0;
}

