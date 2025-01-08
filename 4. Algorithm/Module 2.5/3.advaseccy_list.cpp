#include<bits/stdc++.h>
using namespace std;

vector<int> mat[1005];

int main()
{
    
    int n,e; cin>>n>>e;
    while(e--)
    {
        int a,b; cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    
    int node; cin>>node;

    cout<<mat[node].size()<<endl;
    // for(int v:mat[node])
    //     cout<<v<<" ";

    return 0;
}