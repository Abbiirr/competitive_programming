#include<stdio.h>
int fibonacci_nums(int n)
{
    int i,x=0,a[10000]={0};
    a[0]=0,a[1]=1;
    for(i=2;;i++)
    {
        a[i]=a[i-2]+a[i-1];
        if(a[i]>=n)
            break;
    }
    return a[i-1];
}
int main()
{
    int n,i,x;
    scanf("%d",&n);
    x=fibonacci_nums(n);
    while(n-fibonacci_nums(n)<2)
    {

    }

    printf("%d ",fibonacci_nums(n));
    x=fibonacci_nums(n);
    n=n-x;
    printf("%d ",fibonacci_nums(n));
    x=fibonacci_nums(n);
    n=n-x;
    printf("%d ",fibonacci_nums(n));
    return 0;
}
