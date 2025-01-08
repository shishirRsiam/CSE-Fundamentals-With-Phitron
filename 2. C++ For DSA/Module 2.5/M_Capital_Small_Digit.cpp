#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if (a>='A' && a<='Z')
    {
        cout<<"ALPHA\nIS CAPITAL";
    }
    if (a>='a' && a<='z')
    {
        cout<<"ALPHA\nIS SMALL";
    }
    if(a>='0' && a<='9')
    {
        cout<<"IS DIGIT";
    }
    return 0;
}