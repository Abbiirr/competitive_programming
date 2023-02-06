#include<stdio.h>
int main()
{
    int c,n,x,y,d;
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

    if(x<y)
    {
        c=y-x;
        d=n-c;

        if(d%c==0||d==0)
            printf("cw");
    }
    else
    {
        c=x-y;
        d=n-c;
        if(d%c==0)
            printf("ccw");
        else
            printf("Undefined");
    }

    return 0;

}
