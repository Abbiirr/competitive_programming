#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(i=1;;)
    {
        if(n<=2)
        {
            printf("1");
            break;
        }
        if(n<=i*2)
        {
            if(n<i*i)
            {
                printf("%d",(n/i));
                break;
            }
            else
            {
                printf("%d",(n/i)+i);
                break;
            }
        }
        else
            i++;
    }
    return 0;
}
