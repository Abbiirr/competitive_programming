#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int i=0,j,x,n;
    char a[105],b[105];
    cin >>a;
    for(i=0;a[i]!=0;i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[j]!='+')
            {
                if(a[i]>a[j])
                {
                    x=a[i];
                    a[i]=a[j];
                    a[j]=x;
                }
            }
        }
    }
    cout <<a;


    return 0;
}
