#include<stdio.h>
int main()
{
    char a[105],b[105];
    int i,c=0,d=0;
    scanf("%s%s",&a,&b);
    for(i=0;a[i]!='\0';i++)
    {
         c=c+a[i]-b[i];
        if(c==32||c==-32)
        {
            c=0;
            d++;
        }
    }
    if(d==0)
        c=strcmp(a,b);
    else if(c>0)
        c=1;
    else if(c<0)
        c=-1;
    printf("%d",c);
    return 0;
}
