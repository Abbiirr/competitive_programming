#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    int i,c=0;
    char a[10005];
    cin >>a;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B')
        {
            i=i+2;
            if(c==1)
            {
                cout <<' ';
                c=0;
            }
        }

        else
        {
            cout <<a[i];
            c=1;
        }
    }
    return 0;
}
