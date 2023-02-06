#include<stdio.h>
int main()
{
    int i,c=0,b=1;
    char a[105];
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='V')
        {
             if(b==1)
            {
               if(a[i+1]=='K')
               {
                   c++;
                   i++;
               }

                else if(a[i+1]=='V')
                {
                   if(a[i+2]=='K')
                   {
                       c++;
                       i=i+2;
                   }
                   else
                   {
                       b=0;
                       c++;
                       i++;
                   }
               }
                else if(a[i+1]!='\0')
                {
                    b=0;
                    c++;
                    i++;
                }
            }
            else if(a[i+1]=='K')
                c++;
        }
        if(b==1)
        {
            if(a[i]=='K'&&a[i+1]=='K')
            {
                c++;
                i++;
                b=0;
            }
        }

    }
    printf("%d",c);
    return 0;
}
