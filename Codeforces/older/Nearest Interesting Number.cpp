#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int n,a,i,r,d,sum=0;
    cin >>a;
    n=a;
    for(;n!=0;)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    cout <<sum<<"\n";
    while(1)
    {
        if(sum%4==0)
        {
            n=a;
            sum=0;
            for(;n!=0;)
            {
                r=n%10;
                n=n/10;
                sum=sum+r;
            }
            cout <<sum<<"\n";
            if(sum%4==0)
            {
                cout <<a;
                return 0;
            }
        }

        else
        {
            a++;
            sum++;
        }
    }
    cout <<a;
    return 0;


}
