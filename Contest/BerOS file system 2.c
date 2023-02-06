#include<stdio.h>
int main()
{
    char a[10000],b[10000];
    int i,j;
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='/')
        {
            while(1)
            {
                j=1;
                if(a[i+j]!='/')
                {

                    break;
                }
                j++;
            }

        }
        else
        {
            printf("%c",a[i]);

        }
    }
    return 0;
}
