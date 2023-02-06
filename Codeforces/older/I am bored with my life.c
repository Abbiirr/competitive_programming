#include<stdio.h>
long long int fact(long long int a)
{
    long long int n;
    if(a<=0)
        return 1;
    return a*fact(a-1);
}
int main()
{

    long long int a,b,x,y,i;
    scanf("%lld%lld",&a,&b);
    x=fact(a);
    y=fact(b);
    //printf("%d %d",x,y);
    if(x>y)
    {
            for(i=y;i<=x&&i<=y;i--)
        {
            if(x%i==0&&y%i==0)
            {
                printf("%lld",i);
                break;
            }

        }
    }
    else if(x<y)
    {
            for(i=x;i<=x&&i<=y;i--)
        {
            if(x%i==0&&y%i==0)
            {
                printf("%d",i);
                break;
            }

        }
    }

    return 0;
}
