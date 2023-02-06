#include<stdio.h>
int main()
{
    int t,i;
    double a,b,c,x,e,f,g,h;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
      scanf("%lf%lf%lf",&a,&b,&c);
      e=a*b*c;
      f=a*b+b*c+c*a;
      g=(a*b*c)*(a+b+c);
      h=2*sqrt(g);
      x=e/(f+h);
      printf("%lf\n",x);
    }

    return 0;
}
