#include<stdio.h>
int main()
{
    char a;
    int c=0;

    while(1)
    {
        scanf("%c",&a);
        if(a=='\n')
            return 0;
        if(a=='/')
        {
            while(1)
            {
                scanf("%c",&a);
                if(a=='\n')
                {
                    if(c>0)
                        return 0;
                    else
                    {
                        printf("/");
                        return 0;
                    }


                }

                else if(a!='/')
                {
                    printf("/%c",a);
                    c++;
                    break;
                }
            }

        }
        else
        {
            printf("%c",a);
            c++;

        }

    }
    return 0;
}
