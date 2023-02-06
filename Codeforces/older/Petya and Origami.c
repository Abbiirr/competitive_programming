#include<stdio.h>
int main()
{
    int n,k,i,c=1,r,g,b,x=0;
    scanf("%d%d",&n,&k);
    r=n*2;
    g=n*5;
    b=n*8;
    for(i=1;c<=3;i++)
    {
        if(c==1)
        {
            if(r%k==0)
            {
                x=x+r/k;
                c++;

            }
            else
            {
                x=x+r/k+1;
                c++;

            }
        }
        else if(c==2)
        {
            if(g%k==0)
            {
                x=x+g/k;
                c++;
            }
            else
            {
                x=x+g/k+1;
                c++;
            }

        }
        else if(c==3)
        {
            if(b%k==0)
            {
                x=x+b/k;
                c++;

            }
            else
            {
                x=x+b/k+1;
                c++;
            }
        }
    }
    printf("%d",x);
    return 0;
}
