#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int i,j,k,c=0;
    char a[105];
    cin >>a;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='Q')
        {
            for(j=i+1;a[j]!=0;j++)
            {
                if(a[j]=='A')
                {
                    for(k=j+1;a[k]!=0;k++)
                    {
                        if(a[k]=='Q')
                            c++;
                    }
                }
            }
        }
    }
    cout <<c;
    return 0;
}
