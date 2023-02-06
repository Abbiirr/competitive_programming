#include<iostream>
using namespace std;
#include<cstdio>
int main()
{
    char a[]="qwertyuiop",b[]="asdfghjkl;",c[]="zxcvbnm,./",d,e[1005];
    int i,x=1,n,j;
    cin >>d>>e;
    //cout <<a<<' '<<d<<"\n";
    for(i=0;e[i]!='\0';i++)
    {
        if(d=='R')
        {
            if(x==1)
            {
                for(j=0;a[j]!='\0';j++)
                {
                    if(e[i]==a[j])
                    {
                        e[i]=a[j-1];
                        x=1;
                        break;
                    }

                }
                cout <<j<<"\n";
                if(j>9)
                    x++;

            }
            else if(x==2)
            {
                for(j=0;b[j]!='\0';j++)
                {
                    if(e[i]==b[j])
                    {
                        e[i]=b[j-1];
                        x=1;
                        break;
                    }

                }
                if(j>=9)
                    x++;
            }
            if(x==3)
            {
                for(j=0;c[j]!='\0';j++)
                {
                    if(e[i]==c[j])
                    {
                        e[i]=c[j-1];
                        x=1;
                        break;
                    }

                }
                if(j>=9)
                    x++;
            }

        }
        if(d=='L')
        {
            if(x==1)
            {
                for(j=0;a[j]!='\0';j++)
                {
                    if(e[i]==a[j])
                    {
                        e[i]=a[j+1];
                        x=1;
                        break;
                    }

                }
                if(j>=9)
                    x++;
            }
            else if(x==2)
            {
                for(j=0;b[j]!='\0';j++)
                {
                    if(e[i]==b[j])
                    {
                        e[i]=b[j+1];
                        x=1;
                        break;
                    }
                }
                if(j>=9)
                    x++;
            }
            if(x==3)
            {
                for(j=0;c[j]!='\0';j++)
                {
                    if(e[i]==c[j])
                    {
                        e[i]=c[j+1];
                        x=1;
                        break;
                    }
                }
                if(j>=9)
                    x++;
            }

        }

    }
    cout <<e;
    return 0;

}
