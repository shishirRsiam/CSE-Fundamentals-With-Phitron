#include <bits/stdc++.h>

using namespace std;



int main()
{
    priority_queue<int, vector<int>, greater<int>> minHeap;

    int n; cin>> n;
    while(n--)
    {
        int val; cin>>val;
        minHeap.push(val);
    }

    int q; cin>>q;
    while(q--)
    {
        int cmd; cin>>cmd;
        if(cmd == 0)
        {
            int new_val; cin>>new_val;
            minHeap.push(new_val);
            if(minHeap.empty()) 
            {
                cout<<"Empty"<<endl;
            }
            else cout<<minHeap.top()<<endl;
        }
        else if(cmd == 1)
        {
            if(minHeap.empty()) 
            {
                cout<<"Empty"<<endl;
            }
            else cout<<minHeap.top()<<endl;
        }
        else if(cmd == 2)
        {
            if(not minHeap.empty()) 
            {
                minHeap.pop();
            }
            if(minHeap.empty()) 
            {
                cout<<"Empty"<<endl;
            }
            else cout<<minHeap.top()<<endl;
        }
    }

    return 0;
}
