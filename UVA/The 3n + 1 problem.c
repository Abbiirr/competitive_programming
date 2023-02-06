#include<stdio.h>
int main()
{
    int a,b,cl=1,i,j,x;
    for(;a>=1;)
    {
        scanf("%d%d",&a,&b);
        printf("%d %d",a,b);
        for(i=1;;i++)
        {
            if(cl<=1)
            {
                if(a==1)
                    cl=2;
                else if(a%2==0)
                    a=a/2;
                else
                    a=(3*a)+1;

            }
            else if(cl=2)
            {
                if(b==1)
                {
                    cl=1;
                    break;
                }

                else if(b%2==0)
                    b=b/2;
                else
                    b=(3*a)+1;
            }

        }
        printf("%d",i);
    }
    return 0;
}
