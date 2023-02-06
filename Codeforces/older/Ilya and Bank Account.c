#include<stdio.h>
int main()
{
    int n,n1,x,y;
    scanf("%d",&n);
    if(n>=0)
        printf("%d",n);
    else
    {
        n1=n/10;
        x=n%10,y=n1%10;
        if(x<=y)
        {
            printf("%d",n1);
        }
        else
        {
            n1=n1-y+x;
            //n1=(n1*10)+x;
            printf("%d",n1);
        }

    }
    return 0;
}
