#include<stdio.h>
int main()
{
    int N;
    printf("Enter a size of the array in between 0<N<1000:");
    scanf("%d",&N);
    int adi[N],odd[N],even[N],pal[N];
    int m,n=0,i=0,j=0;
    printf("Enter the elements:");
    for(m=0;m<N;m++)
    {
        scanf("%d",&adi[m]);
        if(adi[m]%2==0)
        {
            even[n]=adi[m];
            n=n+1;
        }
        else{
            odd[i]=adi[m];
            i=i+1;
        }
        int s=0,r=0,x=adi[m];
        while(x!=0)
        {
            
            
            r=x%10;
            s=s*10+r;
            x=x/10;
            
            if(s==adi[m])
            {
                pal[j]=adi[m];
                j++;
            }
            

        }


    }
      /*for(m=0;m<N;m++)
      {


        if(adi[m]%2==0)
        {
            asi[n]=adi[m];
            n=n+1;
        }
        else{
            ami[i]=adi[m];
            i=i+1;
        }
      }*/


    printf("\nEven elements of the array:\n");
    for(m=0;m<n;m++)
    {
        printf("%d\n",even[m]);
    }

    printf("\n Odd elements of the array:\n");
    for(m=0;m<i;m++)
    {
        printf("%d\n",odd[m]);

    }
    //int x,r,s,u=0;
   printf("\n Palindrome elements of the array:\n");
   /*for(m=0;m<N;m++)
   {
       x=adi[m];

       while(x!=0)
       {
           r=x%10;
           s=s*10+r;
           x=x/10;
       }
       if(s==adi[m]){
        ati[u] = adi[m];
        u=u+1;
       }
       s=0;


   }*/
   for(m=0;m<j;m++)
   {
       printf("%d\n",pal[m]);
   }


    return 0;
}