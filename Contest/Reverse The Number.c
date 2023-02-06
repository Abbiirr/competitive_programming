#include<stdio.h>
int main()
{
    int i,T,j,g,t,l;
    char a[100000];
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%s",&a);
        for(j=0;a[j]!='\0';j++)
        {

        }
        for(g=0;g<=j;g++)
        {
            if(a[j]=='0')
            {
                for(l=1;l<=j;l++)
                    if(a[j-l]!='0')
                {
                    break;
                }
            }


             else
             {
                 printf("%c",a[j-g]);
             }




        }
        printf("\n");
    }
    return 0;

}
