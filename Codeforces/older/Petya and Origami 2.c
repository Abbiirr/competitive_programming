#include<stdio.h>
int main()
{
    int n,k,i,c=1,r,g,b,a,j=1;
    scanf("%d%d",&n,&k);
    r=n*2;
    g=n*5;
    b=n*8;
    for(i=1;c<=3;i++)
    {
        if(c==1)
        {

           r=r-k;
           if(r<=0)
            {
                c++;

            }
        }

        else if(c==2)
        {


            g=g-k;
             if(g<=0)
            {
                c++;

            }
        }
        else if(c==3)
        {

            b=b-k;
             if(b<=0)
            {
                c++;

                break;
            }
        }
    }
    printf("%d",i);
    return 0;
}

