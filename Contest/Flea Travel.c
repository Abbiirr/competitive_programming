#include<stdio.h>
int main()
{
    int n,r=0;
    scanf("%d",&n);
    if(n<=2)
        printf("YES");
    else if(n%2==0&&n%3!=0)
    {
        while(r==0)
        {
            r=n%2;
            n=n/2;
            if(n==2)
            {
                printf("YES");
                break;
            }

        }
    }

    else
        printf("NO");
    return 0;
}
