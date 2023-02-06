#include<stdio.h>
int main()
{
    long long int n,i,x=0;
    scanf("%lld",&n);
    n=n+1;
    if(n==1)
        x=0;
    else if(n%2==0)
    {
        x=n/2;
    }
    else
    {
        x=n;
    }
    printf("%lld",x);
    return 0;
}
