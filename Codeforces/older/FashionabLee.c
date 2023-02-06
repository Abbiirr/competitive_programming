//https://codeforces.com/problemset/problem/1369/A
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int t,i,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(n%4==0)
        printf("YES\n");
        else
        {
            printf("NO\n");
        }
        
    }
    return 0;
}