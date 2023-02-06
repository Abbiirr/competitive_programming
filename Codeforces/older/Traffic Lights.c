#include<stdio.h>
int main()
{
    int t,x,g,y,r,i,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&x,&g,&y,&r);
        x=x+1;
        c=0;
        while(1)
        {
            if(c==0)
            {
                if(x>g)
                {
                    x=x-g;
                    c++;
                }
                else
                {
                    printf("GREEN\n");
                    break;
                }
            }
            if(c==1)
            {
                if(x>y)
                {
                    x=x-y;
                    c++;
                }
                else
                {
                    printf("YELLOW\n");
                    break;
                }
            }
            if(c==2)
            {
                if(x>r)
                {
                    x=x-r;
                    c=0;
                }
                else
                {
                    printf("RED\n");
                    break;
                }
            }



        }

    }
    return 0;
}
