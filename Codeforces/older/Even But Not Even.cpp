#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int t,n,i,j,y,sum=0,c=0;
    char x[3];
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >>n;
        char a[n];
        scanf("%s",&a);
        c=0,sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+a[j];
            if(sum>0)
                break;
        }
        if(sum==0)
        {
            cout <<-1<<"\n";
        }
        else
        {
           for(j=0;j<n;j++)
            {
                if(a[j]%2!=0)
                {
                    x[c]=a[j];
                    c++;
                }
                if(c==2)
                    break;

            }
            if(c!=2)
                cout <<-1<<"\n";
            else
                {
                    for(j=0;j<2;j++)
                    {
                        cout <<x[j];
                    }
                    cout <<"\n";
                }
        }

    }
    return 0;
}
