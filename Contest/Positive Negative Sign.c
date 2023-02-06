#include<stdio.h>
int main()
{
    long long int n,m,sum,p;
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lld%lld",&n,&m);
        printf("Case %d:",i);
        p=n/2;
        sum=m*p;

            printf(" %lld\n",sum);
    }
    return 0;
}
