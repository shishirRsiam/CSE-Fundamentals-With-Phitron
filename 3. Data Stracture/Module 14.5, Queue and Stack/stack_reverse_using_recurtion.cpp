#include<bits/stdc++.h>
using namespace std;

void reverse_(stack<int>&st)
{
    if(st.empty()) return;
    int x=st.top();
    st.pop();
    reverse_(st);
    stack<int>n;
    while(!st.empty())
    {
        n.push(st.top());
        st.pop();
    }
    n.push(x);
    while(!n.empty())
    {
        st.push(n.top());
        n.pop();
    }
}

int main()
{
    stack<int>st;

    int n; cin>>n;
    while(n--)
    {
        int v; cin>>v;
        st.push(v);
    }
    reverse_(st);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}
/*
input: 5
1 2 3 4 5
output: 1 2 3 4 5 
*/