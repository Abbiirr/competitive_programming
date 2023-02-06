#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int s[4],i,c=0,j;

    for(i=0;i<4;i++)
    {
        cin >>s[i];

    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(s[i]==s[j])
            {
                c++;
                break;
            }
        }
    }
    cout <<c;
    return 0;
}
