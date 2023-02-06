#include<stdio.h>
int main()
{
    int n,i,b;
    scanf("%lld",&n);
    long long int a[n],j;

    for(i=0;i<n;i++)
    {
        b=0;
        scanf("%lld",&a[i]);
        for(j=1;j<=sqrt(a[i]);j++)
    {
        if(a[i]%j==0)
        {
            b++;
        }

    }


    if(b==3)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;

}
