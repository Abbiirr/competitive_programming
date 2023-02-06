//https://codeforces.com/problemset/problem/1348/A
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        int n,i,x=1,a=0,b=0;
        scanf("%d",&n);
        for(i=1;i<(n/2);i++)
        {
            x*=2;
            a+=x;
        }
        for(;i<n;i++)
        {
            x*=2;
            b+=x;
        }
        a=a+x*2;
        printf("%d\n",a-b);
    }
    
    return 0;
}