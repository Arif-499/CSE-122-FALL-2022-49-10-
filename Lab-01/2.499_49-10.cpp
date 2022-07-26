#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,n,len;
    cin>>n;
    char c[500];
    for(i=0;i<n;i++)
    {
        cin>>c;
        len=strlen(c);
        if(len>10)
        {
            cout<<c[0]<<len-2<<c[len-1]<<endl;
        }
        else
        {

            cout<<c<<endl;
        }
    }
    return 0;
}

