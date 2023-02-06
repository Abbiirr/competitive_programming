#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    long long int t,a,b,i,j,x;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>a>>b;
        j=0;
        if(a>b)
        {
            for(j=0;a!=b;j++)
            {
                if(a%8==0&&a/8>=b)
                {
                    a=a/8;
                }
                else if(a%4==0&&a/4>=b)
                {
                    a=a/4;
                }
                else if(a%2==0&&a/2>=b)
                {
                    a=a/2;
                }
                else
                {
                    cout <<-1<<endl;
                    break;
                }
            }
        }
        else if(a<b)
        {
            for(j=0;a!=b;j++)
            {
                if(a*8<=b)
                {
                    a=a*8;
                }
                else if(a*4<=b)
                {
                    a=a*4;
                }
                else if(a*2<=b)
                {
                    a=a*2;
                }
                else
                {
                    cout <<-1<<endl;
                    break;
                }
            }
        }
        if(a==b)
        {
            cout <<j<<endl;
        }

    }
    return 0;
}
