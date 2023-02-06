#include<stdio.h>
int main()
{
    int n,k,b=0;
    scanf("%d%d",&n,&k);
    while(n!=0)
    {
        n=n/k;
        b++;
    }
    printf("%d",b);
    return 0;
}
