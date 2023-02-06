#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int prime_check(int n)
{
    int i;
    if(n%2==0)
        return 1;
    for(i=3;i<=sqrt(n);i=i+2)
    {
        if(n%i==0)
            return 1;
    }
    return 0;
}
int main()
{
    int t,n,i;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        int k,a=0,j,c=n/2;  //c%2 is ashisgup
        if(n==1)
        {
            cout <<"FastestFinger"<<endl;
            continue;
        }
        else if(n==2||n%2==1)
        {
            cout <<"Ashishgup"<<endl;
            continue;
        }
        else 
        {
            for(j=2;j<=sqrt(n);j++)
            {
                if(n%j==0)
                {
                    if((n/j)%2==1)
                    {
                        //n=j;
                        a=j;
                        break;
                    }
                    else if(j%2==1)
                    {
                        //n=n/j;
                        a=j;
                        break;
                    }
                }
            }
            if(a==0)
            {
                cout <<"FastestFinger"<<endl;
            }
             else if(n%4==0)
            {
                cout <<"Ashishgup"<<endl;
            }
            else if(prime_check(n/2)==0)
            {
                cout <<"FastestFinger"<<endl;
            }
            else
            {
                cout <<"Ashishgup"<<endl;
            }

        }
        
        
    }
        return 0;
}