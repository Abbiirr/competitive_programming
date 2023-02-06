#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int n,i,k=0,x=0;
    cin >>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >>a[i];
        if(a[i]==25)
        {
            k++;
        }
        else if(a[i]==50)
        {
            k--;
            x++;
        }
        else if(a[i]==100)
        {
            if(x==0)
                k=k-3;
            else
            {
                x--;
                k--;
            }
        }
        if(k<0)
        {
            cout <<"NO";
            return 0;
        }
    }
    cout <<"YES";
    return 0;
}
