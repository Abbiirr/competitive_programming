#include<stdio.h>
int function(int a)
{
    int x,b;
    b = a / 10;
      x = a - b;
      return x;
}
int main()
{
    int x,a,b,i,z,k;
    scanf("%d",&x);
    a=10*x/9;
    z=a;



    for(a=0;a<=z;)
    {
        if(function(a)==x)
        {
            printf("%d ",a);
        }

        a++;
    }

    return 0;
}
