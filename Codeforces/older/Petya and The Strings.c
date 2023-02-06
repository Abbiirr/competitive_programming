#include<stdio.h>
int main()
{
    int i,x=0,c=0,d=0;
    char a[1005],b[1005];
    scanf("%s%s",&a,&b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]=a[i]-'A'+'a';
        }
         if(b[i]>='A'&&b[i]<='Z')
        {
            b[i]=b[i]-'A'+'a';
        }
        x=a[i]-b[i];
        if(x==0||x==32||x==-32)
        {

        }
        else if(x>0)
        {
            printf("1");
            return 0;
        }
        else if(x<0)
        {
            printf("-1");
            return 0;
        }
    }
    printf("0");
    return 0;
}
