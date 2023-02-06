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
    long long int q,i,x=0,f=0;
    scanf("%lld",&q);
    if(q==1)
    {
        printf("1\n0");
        return 0;
    }
    else if(prime_check(q)==1)
    {
        printf("1\n0");
        return 0;
    }
    else if(q%2==0)
    {
        x=q/2;
      for(i=3;i<sqrt(q)+1;i=i+2)
        {
            if(q%i==0)
            {
               x++;
               if(i>f)
                    f=i+1;
            }


        }
    }
    else
    {
        for(i=3;i<=sqrt(q)+1;i++)
        {
            if(q%i==0)
            {
                x++;
                if(i>f)
                    f=i;
            }

        }
    }
    if(x%2==0)
    {
        printf("2");
    }
    else
    {
        printf("1\n");
        printf("%d",f);
        /*for(i=2;;i++)
        {
            if(q%i==0)
            {
                printf("%lld",i);
                break;
            }
        }*/
    }
    return 0;
}
