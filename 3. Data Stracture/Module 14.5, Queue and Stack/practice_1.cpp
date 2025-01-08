#include<bits/stdc++.h>
using namespace std;

class Stack
{
    public:
    vector<int>myStack;
    int sz=0;
    void push(int val)
    {
        sz++;
        myStack.push_back(val);
    }
    void pop()
    {
        sz--;
        myStack.pop_back();
    }
    int top()
    {
        return myStack.back();
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0) return true;
        return false;
    }

};

int main()
{
    Stack a;
    int n; cin>>n;
    while(n--)
    {
        int v; cin>>v;
        a.push(v);
    }
    int m; cin>>m;
    Stack b;
    while(m--)
    {
        int v; cin>>v;
        b.push(v);
    }
    bool flag = true;
    if(a.size()!=b.size())
    {
        flag = false;
    }
    else 
    {
        while(!b.empty())
        {
            if(a.top() != b.top())
            {
                flag = false;
                break;
            }
            a.pop(),b.pop();
        }
    }
    flag ? cout<<"YES\n" : cout<<"NO\n";
    return 0;
}