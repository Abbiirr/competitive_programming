#include<stdio.h>
int main()
{
    int n,m,i,x;
    scanf("%d%d",&n,&m);
    if(n<m)
    {
        printf("-1");
    }

    else
    {
        if(n%2==0)
            x=n/2;
        else
            x=(n/2)+1;
        if(x%m==0)
        {

        }
        else
        {
            while(x%m!=0)
            {
                x++;
            }
        }
        printf("%d",x);
    }

    return 0;
}
