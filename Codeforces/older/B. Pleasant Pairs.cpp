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

        long long x,mina,minb,count =0;
        vector <long long> v(2*n+1, -1);    //maximum value will be 2*n
        for(long long j=1;j<=n;j++)
        {
            cin >>x;
            v[x] = j;       //only storing the indices in the vector.
        }
        for(long long sum=3;sum<2*n;sum++) //lowest sum can be 3. highest 2*n. as question
        {
            for(long long j=1;j*j<=sum;j++)
            {
                if(sum%j==0 && j*j!=sum && v[j]!=-1 && v[sum/j]!=-1 && v[j]+v[sum/j]==sum)
                    //if(sum%i==0 and i*i!=sum and index[i]!=-1 and index[sum/i]!=-1 and index[i]+index[sum/i]==sum)

                    count ++;
            }
        }


        cout <<count<<endl;

    }

    return 0;
}
