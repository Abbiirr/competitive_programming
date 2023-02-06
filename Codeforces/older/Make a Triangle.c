#include<stdio.h>
int main()
{
    int a,b,c,i,sum;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b==c)
    {
        sum=0;
    }
    else if(a>b)
    {
        if(a>c)
        {
          sum=a-b-c+1;
        }
        else
        {
            sum=c-a-b+1;
        }


    }
    else if(b>c)
    {
           sum=b-a-c+1;
    }

    else
       {
           sum=c-a-b+1;
       }


    if(sum<=0)
    {
        printf("0");
    }
    else
    printf("%d",sum);
    return 0;
}
