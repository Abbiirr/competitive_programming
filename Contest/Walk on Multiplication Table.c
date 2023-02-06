#include<stdio.h>
int main()
{
    long long int N,x,i,j;
    scanf("%lld",&N);
    x=sqrt(N);
    while(1)
    {
        if(N%x==0)
        {
            i=N/x;
            break;
        }
        else
            x--;
    }

    j=x+i-2;
    printf("%lld",j);
    return 0;
}
