#include <stdio.h>
#include <string.h>

int main()
{
   int i,j;
   char a[1000],b[1000],c;
   //scanf("%s",a);
   gets(a);
   for(i=0;a[i]!=0;i++);
   
   gets(b);
   //a[i]='\0';
   for(j=0;a[j]!=0;j++);
   for(i=0;a[i]!=0&&b[i]!=0;i++,j--)
   {
       if(a[i]!=b[i])
       {
           printf("NO");
           return 0;
       }
       
   }
    printf("YES");
   return 0;
}