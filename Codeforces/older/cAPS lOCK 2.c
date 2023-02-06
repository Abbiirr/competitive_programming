#include<stdio.h>
int main()
{
    int i;
    char a[1000],b[1000]={' '};
    scanf("%s",&a);
    if(a[0]>='A'&&a[0]<='Z')
    {
        b[0]=a[0]+'a'-'A';
        for(i=1;a[i]!='\0';i++)
        {
            if(a[i]>='a'&&a[i]<='z')
            {
                printf("%s",a);
                return 0;
            }
            else
                {
                    b[i]=a[i]-'A'+'a';
                }
        }
    }
    else
    {
        b[0]=a[0]-'a'+'A';
         for(i=1;a[i]!='\0';i++)
        {
            if(a[i]>='a'&&a[i]<='z')
            {
                printf("%s",a);
                return 0;
            }
            else
                {
                    b[i]=a[i]-'A'+'a';
                }
        }
    }
    printf("%s",b);
    return 0;
}
