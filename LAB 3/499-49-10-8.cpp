//CODEFORCE PROBLEM : 112A
//PROBLEM NAME : Petya and Strings


#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[500];
    char y[500];
    cin>>x>>y;
    int f=strlen(a);
    for(int i=0;i<f;i++)
    {
        x[i]=towlower(x[i]);
        y[i]=towlower(y[i]);
    }
      int g=strcmp(x,y);
      if(g==0)
      cout<<"0"<<endl;
    else if(g<0)
      cout<<"-1"<<endl;
    else if(g>0)
      cout<<"1"<<endl;
      return 0;
}
