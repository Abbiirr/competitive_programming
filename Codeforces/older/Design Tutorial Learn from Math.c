#include<stdio.h>
int prime_check(int n)
{
    int i;
    for(i=2;i<sqrt(n+1);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n,x,y,i;
    scanf("%d",&n);
    if(n%2==0&&prime_check(n/2)==0)
    {
        x=(n/2);
        y=n-x;
    }
    else
    {
        x=4;
        y=n-x;
        while(prime_check(y)==1)
        {
            x=x+2;
            y=n-x;
        }

    }
    printf("%d %d",x,y);
    return 0;
}
