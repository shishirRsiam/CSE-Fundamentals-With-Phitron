#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>mq;
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