#include<stdio.h>
int prime_check(long long int n)
{
    int i;
    for(i=2;i<sqrt(n)+1;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    long long int q,x,i,y;
    scanf("%lld",&q);
    x=sqrt(q);
    if(prime_check(q)==1)
    {
        printf("1\n0");
        return 0;
    }

    else if(prime_check(x)==1)
    {
        printf("1\n%lld",x);
        return 0;
    }
    else
    {
        for(i=2;i<=(sqrt(q)+1);i++)
        {
        if(q%i==0)
        {
             x=i;
             y=q/i;
        }
        if(prime_check(x)==1&&prime_check(y)==1)
        {
            print("")
        }


        }
    }
    }
    printf("2");
    return 0;
}
