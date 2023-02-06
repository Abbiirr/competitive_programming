#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    char a[1000005];
    int i,c=0,j;
    for(;a[0]!='.';)
    {
        cin >>a;
        for(i=0;a[i]!='\0';i++)
        {
            for(j=i+1;a[j]!='\0';j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                }
                if(c=j+1)
            }
        }
    }

}
