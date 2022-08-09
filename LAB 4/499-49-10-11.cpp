//CODEFORCE PROBLEM : 236A
//PROBLEM NAME : Boy or Girl



#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[500];
    cin >> s;
    int x=0;
    int a=strlen(s);
    for (int i=0;i<a;i++)
    {
        for (int j=i+1;j<a;j++)
        {
            if (s[i]==s[j])
            {
                x++;
            }
        }
    }
    int m=a-x;
    if (m%2==0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}
