#include<bits/stdc++.h>
using namespace std;

int main()
{

    priority_queue<int,vector<int>,greater<int>>p;

    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        int v; cin>>v;
        p.push(v);
    }

    int t; cin>>t;
    while(t--)
    {
        int c; cin>>c;

        if(c==0)
        {
            int x; cin>>x;
            p.push(x);
        }
        else if(c==1) 
        {
            cout<<p.top()<<endl;
        }    
            
        else if(c==2) 
        {
            if(!p.empty()) 
            {
                p.pop();
                cout<<p.top()<<endl;
            }
            
            else cout<<"Empty\n";
            
        }

    }
    return 0;
}