#include<bits/stdc++.h>
using namespace std;

class myStack
{
    public:
    vector<int>a;
    void push(int val)
    {
        a.push_back(val);
    }
    void pop()
    {
        a.pop_back();
    }
    int top()
    {
        return a.back();
    }
    int size()
    {
        return a.size();
    }
    bool empty()
    {
        if(a.size()==0) return true;
        else return false;
    }
};

int main()
{
    myStack st;
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        int v; cin>>v;
        st.push(v);
    }
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}