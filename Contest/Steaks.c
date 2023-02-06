#include<stdio.h>
int main()
{
    long long int s,p,n;
    scanf("%lld%lld",&s,&p);
    n=s/p;

    if(s%p!=0)
    {
        n++;
    }
    if(n==1)
    {
        n++;
    }

    printf("%lld",n*5);
    return 0;
}
