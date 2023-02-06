#include<stdio.h>
int main()
{
    int n,a[26],s[26],i,j,c=0;
    for(i=0;i<26;i++)
    {
        a[i]=65+i;
        s[i]=97+i;
    }
    scanf("%d",&n);
    char b[n+2];
    scanf("%s",&b);
    if(n<26)
    {
        printf("NO");
        return 0;
    }

    for(i=0;i<n;i++)
    {
       for(j=0;j<26;j++)
       {
           if(a[j]!=0)
           {
               if(b[i]==a[j]||b[i]==s[j])
               {
                   a[j]=0;
                   s[j]=0;
                   c++;
                   break;
               }
           }
       }
    }
    if(c==26)
        printf("YES");
    else
        printf("No");
    return 0;
}
