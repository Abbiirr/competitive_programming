#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int t,n,i;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        int j,k,c=0;
        for(j=2;j<=sqrt(n);j++)
        {
            
            if(n%j==0)
            {
                
                for(k=j+1;k<sqrt(n/j);k++)
                {
                    if((n/j)%k==0)
                    {
                        cout <<"Yes\n"<<j<<' '<<(n/j)/k<<' '<<k<<endl;
                        c=1;
                        j=sqrt(n);
                        break;
                    }
                }
            }
        }
        if(c==0)
        cout <<"No"<<endl;
        
    }
    return 0;
}