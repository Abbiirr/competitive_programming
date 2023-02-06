#include<stdio.h>
int main()
{
    long long int t,a,b,k,n,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld%lld",&a,&b,&k);
        if(k%2==0)
        {
            n=(a-b)*(k/2);
        }
        else
        {
            n=a*((k/2)+1)-b*(k/2);
        }
        printf("%lld\n",n);
    }

    return 0;
}
