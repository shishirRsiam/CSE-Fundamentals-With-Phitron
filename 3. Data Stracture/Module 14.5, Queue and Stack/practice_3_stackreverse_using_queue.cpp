#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>S;
    int n; cin>>n;
    while(n--)
    {
        int v; cin>>v;
        S.push(v);
    }
    stack<int>nS;
    while(!S.empty())
    {
        nS.push(S.top());
        S.pop();
    }
    while(!nS.empty())
    {
        cout<<nS.top()<<" ";
        nS.pop();
    }
    return 0;
}