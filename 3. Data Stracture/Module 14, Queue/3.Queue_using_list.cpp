#include<bits/stdc++.h>
using namespace std;

class myQueue 
{
    public:
    list<int>a;
    void push(int val)
    {
        a.push_back(val);
    }
    void pop()
    {
        a.pop_front();
    }
    int front()
    {
        return a.front();
    }
    int size()
    {
        return a.size();
    }
    bool empty()
    {
        return a.empty();
    }
};

int main()
{
    myQueue mq;
    int n; cin>>n;
    while(n--)
    {
        int v; cin>>v;
        mq.push(v);
    }
    while(!mq.empty())
    {
        cout<<mq.front()<<endl;
        mq.pop();
    }
    return 0;
}