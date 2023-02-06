#include<stdio.h>
int main()
{
    long long int a,b=0,j,i,n,c;
    scanf("%lld",&n);
    for(j=1;j<=n;j++)
    {
        b=2;
        scanf("%lld",&a);
        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
            b++;
        }
        printf("%d",b);
        if(b==3)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
