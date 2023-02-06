#include<stdio.h>
int main()
{
    int n,i=0;
    char x;
    while(x!='\n')
    {
        scanf("%c",&x);
        if(x=='4'||x=='7')
            i++;
    }
    if(i==4||i==7||i==47||i==74||i==44||i==77||i==444||i==474||i==774||i==777||i==744||i==477)

        printf("YES");
    else
        printf("NO");
    return 0;
}
