#include<stdio.h>
int main()
{
    int hi,mi,m1,m2,h1,h2,i,x,n,h,m;
    scanf("%d%d%d",&x,&hi,&mi);
    h=hi,m=mi;
    for(i=0;;i++)
    {
        if(i>0&&m==mi)
        {
            for(n=0;;n++)
            {
                if(h==0)
                    h=24;
                if(h==07||h==17)
                    break;
                h--;
            }
            m=m+(n*60);
        }
        m1=m%10,m2=m1%10,h1=h%10,h2=h1%10;
        if(m1==7||m2==7||h1==7||h2==7)
        {
            break;
        }

        if(x>=m)
        {
            m=m+60-x;
            h=h-1;
        }
        else
        {
            m=m-x;
        }
        /*if(m==0)
        {
            m=m+60;
            h=h-1;
        }*/
    }
    printf("%d",i);
    return 0;
}
