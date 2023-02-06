#include<iostream>
using namespace std;
#include<cstdio>
#include<cstring>
int main()
{
    char a[105];
    int c=1,x=1,i;
    cin >>a;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y')
        {
            c=1;
        }
        else
            c++;
        if(c>x)
            x=c;
    }
    cout <<x;
    return 0;

}


