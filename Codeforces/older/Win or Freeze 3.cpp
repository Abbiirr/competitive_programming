#include<cstdio>
#include<iostream>
using namespace std;
#include<cmath>
int prime_check(long long int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    long long int n,i,x,y,c=0,j;
    cin >>n;
    x=sqrt(n);
    if(n==1||prime_check(n)==1)
    {
        printf("1\n0");
        return 0;
    }
    else if(n==x*x&&prime_check(x)==1)
    {
        printf("2\n");
        return 0;
    }
    else
    {
        if(n%2!=0)
        {
           for(i=3;i<=sqrt(n);i=i+2)
            {
            if(n%i==0)
            {
               if(prime_check(i)==1)
               {
                   x=n/i;
                   if(prime_check(x)==1)
                   {
                        printf("2\n");
                        return 0;
                   }
               }
               else
               {
                   for(j=2;j<i;j++)
                   {
                       if(i%j==0)
                        {
                            if(prime_check(j)==1)
                            {
                                cout <<"1\n"<<i;
                                return 0;
                            }
                        }
                   }

               }
            }
        }
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
               if(prime_check(i)==1)
               {
                   x=n/i;
                   if(prime_check(x)==1)
                   {
                        printf("2\n");
                        return 0;
                   }
               }
               else
               {
                   for(j=2;j<i;j++)
                   {
                       if(i%j==0)
                        {
                            if(prime_check(j)==1)
                            {
                                cout <<"1\n"<<i;
                                return 0;
                            }
                        }
                   }

               }
            }
        }
    }
}
}
