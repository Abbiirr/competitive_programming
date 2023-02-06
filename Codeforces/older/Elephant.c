#include<stdio.h>
    int main()
    {
        int x,n,m;
        scanf("%d",&x);
        n=x/5;
        m=n+1;
        if(x%5==0)
        {
            printf("%d",n);
        }
        else
            printf("%d",m);
            return 0;
    }
