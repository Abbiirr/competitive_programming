#include<stdio.h>
int main()
{
    char a[10000],b[10000];
    int i,c;
    scanf("%s",&a);
    if(a[0]>='a'&&a[0]<='z')
        b[0]=a[0]-'a'+'A';
    if(a[1]>='A'&&a[1]<='Z')
    {
      for(i=1;a[i]!='\0';i++)
        {
        if(a[i]>='A'&&a[i]<='Z')
        {
            b[i]=a[i]-'A'+'a';
        }
        else if(a[i]>='a'&&a[i]<='z')
        {
            printf("%s",a);
            return 0;
        }
    }
    }
    else
    {
        if(a[0]>='a'&&a[0]<='z')
            a[0]=a[0]-'a'+'A';
        printf("%s",a);
        return 0;
    }





    printf("%s",b);
    return 0;
}
