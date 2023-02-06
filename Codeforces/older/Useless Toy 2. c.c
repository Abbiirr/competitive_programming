#include<stdio.h>
int main()
{
    int c,n,x,y,d,e,i;
    char a,b;
    scanf("%c %c",&a,&b);
    scanf("%d",&n);
    if(a=='^')
        x=1;
    else if(a=='>')
        x=2;
    else if(a=='v')
        x=3;
    else if(a=='<')
        x=4;
    if(b=='^')
        y=1;
    else if(b=='>')
        y=2;
    else if(b=='v')
        y=3;
    else if(b=='<')
        y=4;

    d=x,e=x;
    for(i=0;i<n;i++)
    {

        d++;
        c++;
        e--;
        if(c==4)
        {
            c=0;
            x=x-4;
            e=e+4;
        }
    }
    if(d==y)
    {
        printf("cw");

    }
    else if(e==y)
    {
        printf("ccw");

    }
    else
        printf("undefined");
    return 0;
}
