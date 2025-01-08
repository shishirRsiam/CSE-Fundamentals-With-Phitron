#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>S; queue<int>Q;
    int s; cin>>s;
    while(s--)
    {
        int v; cin>>v;
        S.push(v);
    }
    int q; cin>>q;
    while(q--)
    {
        int v; cin>>v;
        Q.push(v);
    }
    bool flag = true;
    if(S.size() != Q.size())
    {
        flag = false;
    }
    else 
    {
        while(!S.empty() && !Q.empty())
        {
            if(S.top() != Q.front())
            {
                flag = false; break;
            }
            S.pop(),Q.pop();
        }
    }
    flag ? cout<<"YES\n" : cout<<"NO\n";
    return 0;
}