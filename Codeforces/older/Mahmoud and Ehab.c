#include<stdio.h>
int main()
{
     int n,i,b=1;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        if(n==0)
            break;
        else if(b==1)
        {
            if(i%2==0)
            {
                n=n-i;
                b=0;
            }

        }
        else if(b==0)
            {
                n=n-i;
                b=1;
            }
    }
    if(b==1)
        printf("Ehab");
    else if(b==0)
        printf("Mahmoud");
    return 0;
}
