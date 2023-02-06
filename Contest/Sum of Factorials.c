#include<stdio.h>
long long int fact(int x)
{
    if(x<=0)
        return 1;
    return x*fact(x-1);

}
int main()
{
    int t,i;
    long long n,a,b,c,
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        n=n-1;
        printf("1!");
        a=2;
        while(n>0)
        {
            b=n-fact(a);
            if(b==0)
            {
                printf("+%lld!",a);
                break;
            }
            while(1)
            {
                d=a+1;
                c=b-fact(d);
                if()
            }

            else if()
            {

            }

            a++;
        }

    }
    return 0;
}
