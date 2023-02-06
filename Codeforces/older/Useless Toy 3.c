#include<stdio.h>
int main()
{
    int c,n,x,y,d,e,i;
    char a,b;
    scanf("%c %c",&a,&b);
    scanf("%d",&n);
    if(a=='^')
    {
        if(b=='^')
            x=0,y=0;
        else if(b=='>')
            x=1,y=3;
        else if(b=='v')
            x=2,y=2;
        else if(b=='<')
            x=3,y=1;
    }

    else if(a=='>')
    {
        if(b=='^')
            x=3,y=1;
        else if(b=='>')
            x=0,y=0;
        else if(b=='v')
            x=1,y=3;
        else if(b=='<')
            x=2,y=2;
    }
    else if(a=='v')
    {
        if(b=='^')
            x=2,y=2;
        else if(b=='>')
            x=3,y=1;
        else if(b=='v')
            x=0,y=0;
        else if(b=='<')
            x=1,y=3;
    }
    else if(a=='<')
    {
        if(b=='^')
            x=1,y=3;
        else if(b=='>')
            x=2,y=2;
        else if(b=='v')
            x=3,y=1;
        else if(b=='<')
            x=0,y=0;
    }

    n=n%4;
    if(n%2==0)
            printf("undefined");
    else
    {
        if(n==x)
            printf("cw");
        else if(n==y)
            printf("ccw");
    }
    return 0;
}
