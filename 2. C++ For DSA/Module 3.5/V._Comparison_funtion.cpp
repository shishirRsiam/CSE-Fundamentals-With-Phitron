#include<bits/stdc++.h>
using namespace std;
int fun()
{
    int a,b;
    char c;
    cin>>a>>c>>b;
    if(c=='=')
    {
        if(a==b)
        {
            return 1;
        }
    }
    if(c=='>')
    {
        if (a>b)
        {
            return 1;
        }
    }
    if(c=='<')
    {
        if(a<b)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int ans=fun();
    if (ans==1)
    {
        cout<<"Right";
    }
    else 
    {
        cout<<"Wrong";
    }
    return 0;
}