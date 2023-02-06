#include<stdio.h>
 int check_prime(long long int x)
{
    long long int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    long long int n,i,x,a;
    scanf("%lld",&n);

    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        x=sqrt(a);
        if(check_prime(x)==0)
            printf("NO\n");
        else if(a==1)
            printf("NO\n");
        else if(a==x*x)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
