#include<stdio.h>
int main()
{
    int i,c=0;
    char a;
    for(;a!='\n';)
    {
        scanf("%c",&a);

        if(c==0&&a=='h')
        {
            c++;
        }

        else if(c==1&&a=='e')
        {
            c++;
        }

        else if(c==2&&a=='l')
        {
            c++;
        }

        else if(c==3&&a=='l')
        {
            c++;
        }

        else if(c==4&&a=='o')
        {
            c++;
        }
    }
    if(c==5)
        printf("YES");
    else
        printf("NO");
    return 0;
}
