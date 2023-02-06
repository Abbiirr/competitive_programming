#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    char kb[]="qwertyuiopasdfghjkl;zxcvbnm,./",input[10005],c;
    int i,j;
    cin >>c>>input;
    if(c=='R')
    {
        for(i=0;input[i]!='\0';i++)
        {
            for(j=0;kb[j]!='\0';j++)
            {
                if(input[i]==kb[j])
                {
                    input[i]=kb[j-1];
                    break;
                }
            }
        }
    }
    if(c=='L')
    {
        for(i=0;input[i]!='\0';i++)
        {
            for(j=0;kb[j]!='\0';j++)
            {
                if(input[i]==kb[j])
                {
                    input[i]=kb[j+1];
                    break;
                }
            }
        }
    }
    cout <<input;
    return 0;
}
