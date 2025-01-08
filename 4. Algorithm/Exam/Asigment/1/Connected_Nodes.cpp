#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e; cin>>n>>e;

    vector<int>mat[n];

    while(e--)
    {
        int a,b; cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    int t; cin>>t;
    while(t--)
    {
        int a; cin>>a;
        if(mat[a].empty()) cout<<"-1\n";
        else 
        {
            sort(mat[a].rbegin(),mat[a].rend());
            for(int v:mat[a]) cout<<v<<" ";
            cout<<endl;
        }
    }

    return 0;
}