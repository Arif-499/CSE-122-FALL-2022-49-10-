//CODEFORCE PROBLEM : 263A
//PROBLEM NAME : Beautiful Matrix


#include <iostream>
using namespace std;
int main()
{
    int y=0;
    for (int a=1;a<=5;a++)
    {
    for (int b=1;b<=5;b++)
    {
     cin>>y;
     if(y==1)
     cout<<abs(a-3)+abs(b-3)<<endl;
    }
    }
    return 0;
}
