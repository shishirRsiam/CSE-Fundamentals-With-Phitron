#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>ls;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int v;cin>>v;
        ls.push(v);
    }
    while(!ls.empty())
    {
        cout<<ls.top()<<endl;
        ls.pop();
    }
    ls.push(100);
    if(!ls.empty())
    {
        cout<<ls.top();
    }
    return 0;
}