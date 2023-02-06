#include<stdio.h>
int main()
{
    int n=0,k,a,b,c,d,l,i,r;
    scanf("%d.%d.%d.%d",&a,&b,&c,&d);
    for(l=1;l<=4;l++)
    {
      scanf("%d",&k);
      for(i=0;k!=0;i++)
      {
            r=k%10;
            k=k/10;
            r=r*pow(2,i);
            n=n+r;
            if(l==1)
            {
                if(n!=a)
                      {
                          printf("No");
                          return 0;
                      }
                  }
                  else if(l==2)
                  {
                     if(n!=b)
                      {
                          printf("No");
                          return 0;
                      }
                  }
                  else if(l==3)
                  {
                     if(n!=c)
                      {
                          printf("No");
                          return 0;
                      }
                  }
                  else if(l==4)
                  {
                     if(n!=d)
                      {
                          printf("No");
                          return 0;
                      }
                  }
              }


    }



    printf("%s\n",a);
    return 0;
}
