#include<stdio.h>
int main()
{
    int a,b,i,x,c=1;;
    scanf("%d%d",&a,&b);
    for(i=1;;i++)
    {
        if(c==1)
        {
          a=a-i;
          c=2;
          if(a<0)
          {
              printf("Vladik");
              return 0;
          }
        }

        else if(c==2)
        {
            b=b-i;
            c=1;
            if(b<0)
            {
                printf("Valera");
                return 0;
            }
        }

    }

}
