#include<stdio.h>
    int main()
    {
        int k,n,w,sum,x,i;
        scanf("%d%d%d", &k,&n,&w);
        sum=0;
        for(i=1; i<=w; i=i+1)
            sum=sum+k*i;
            x=sum-n;
        if(x<=0)
        {

                printf("0");
        }
        else
        {
            printf("%d\n",x);
        }

        return 0;
    }
