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
    queue<int>Q;
    while(!S.empty())
    {
        Q.push(S.top());
        S.pop();
    }
    while(!Q.empty())
    {
        cout<<Q.front()<<" ";
        Q.pop();
    }
    return 0;
}

/*
input: 5
1 2 3 4 5 
output: 5 4 3 2 1 
*/