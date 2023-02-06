#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<string>

int main()
{
    int t;
    cin >>t;

    for(int i=0;i<t;i++)
    {
        int n;
        cin >>n;

        long long a[n],b[n],mina,minb,count =0;
        cin >>a[0];
        mina = a[0];
        for(int j=1; j<n;j++)
        {
            cin >>a[j];
            if(a[j]<mina)
                mina=a[j];
        }
        cin >>b[0];
        minb = b[0];
        for(int j=1; j<n;j++)
        {
            cin >>b[j];
            if(b[j]<minb)
                minb= b[j];
        }

        for(int j=0; j<n;)
        {
            if(a[j]>mina && b[j]>minb)
            {
                int x= min((a[j]-mina),(b[j]-minb));
                a[j]-=x;
                b[j]-=x;
                count+=x;
            }
            if(a[j]>mina)
            {
                count+=a[j]-mina;
                a[j]=mina;
            }
            else if(b[j]>minb)
            {
                count+=b[j]-minb;
                b[j]=minb;
            }
            else 
                j++;
        }

        cout <<count<<endl;


        
    }
    
    return 0;
}
