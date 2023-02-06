#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define PI			2*acos(0.0)
int main()
{
    int n,i;
    cin >>n;
    int a[n],mx=0;
    multiset<long long int> mset;
    multiset <long long int> ::iterator itr;
    for(i=0;i<n;i++)
    {
        cin >>a[i];
        mset.insert(a[i]);  //stores the values in multiset
    }
    mx=*mset.rbegin();   //determines the maximum element
    for(i=1;i<=mx;i++)
    {
        if(mx%i==0)  //checks which are divisors of mx
        {
            mset.erase(mset.find(i));  //deletes divisors of mx
        }
    }
    cout <<mx<<' '<<*mset.rbegin();  //*mset.rbegin() is the highest value which is not a divisor of mx. Thus, it is other ans
    return 0;
}