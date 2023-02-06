#include<stdio.h>
int main()
{
    int a[26]={0},n=0;
    char c;
    while(1)
    {
        c=getchar();
        if(c>='a'&&c<='z')
        {
            int x=(int)c;
            x=x-48;
            if(!a[x])
            {
                a[x]++;
                n++;
            }
        }
        if(c=='}')
            break;
    }
    printf("%d",n);
    return 0;
}