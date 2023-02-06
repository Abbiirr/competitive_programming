#include<stdio.h>
int main()
{
    int n,i,a,c=0;
    scanf("%d",&n);
    for(i=1;;)
    {
        a=(i*2);
        if(a>=n)
        {
            if(n<=0)
            {
                printf("%d",c);
                break;
            }
            else
            {
                n=n-i;
            }

        }
        else
        {
            i=i+i;
        }
         c++;
    }
    return 0;
}
