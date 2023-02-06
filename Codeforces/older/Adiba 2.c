#include <stdio.h>
#include <string.h>

int main()
{
   int n,t,i;
   scanf("%d%d",&n,&t);
   int a[7],x=1,sum=0;
   for(i=0;i<7;i++)
   {
       scanf("%d",&a[i]);
       sum=sum+a[i];
       if(sum<=t)
       x++;
   }
   printf("%d",7-x);

   return 0;
}