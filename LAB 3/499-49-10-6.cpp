//CODEFORCE PROBLEM : 282A
//PROBLEM NAME : Bit++


#include<iostream>
using namespace std;
int main()
{
    int a,y=0;
    char b[40];
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b;
      if(b[1]=='+')
            y++;
      if(b[1]=='-')
            y--;
    }
    cout<<y<<endl;
    return 0;
}
