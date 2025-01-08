#include<bits/stdc++.h>
using namespace std;

class myStack
{
    public:
    list<int>myList;
    void push(int val)
    {
        myList.push_back(val);
    }
    void pop()
    {
        myList.pop_back();
    }
    int top()
    {
        return myList.back();
    }
    int size()
    {
        return myList.size();
    }
    bool empty()
    {
        if(myList.size()==0) return true;
        else return false;
    }
};

int main()
{
    myStack ls;
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
    return 0;
}