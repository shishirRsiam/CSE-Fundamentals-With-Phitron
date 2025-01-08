#include<bits/stdc++.h>
using namespace std;


int main()
{
    myQueue mq;
    int n; cin>>n;
    while(n--)
    {
        int v; cin>>v;
        mq.push(v);
    }
    mq.print_reverse_();
    while(!mq.empty())
    {
        cout<<mq.front()<<endl;
        mq.pop();
    }
    return 0;
}