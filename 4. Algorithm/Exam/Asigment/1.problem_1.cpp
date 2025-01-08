#include<bits/stdc++.h>
using namespace std;

const int sz = 1e5+5;
vector<int> mat[sz];
bool vst[sz];

void dfs(int src)
{
    queue<int>q; q.push(src);

    vst[sz]=1;
    while(!q.empty() and i--)
    {
        
    }
}

int main()
{
    int n,e; cin>>n>>e;
    while(e--)
    {
        int a,b; cin>>a>>b;
        mat[a].push_back(b);
    }
    memset(vst, false, sizeof(vst));
    int t; cin>>t;
    while(t--)
    {
        memset(vst, false, sizeof(vst));
        int a,b; cin>>a>>b;
        dfs(a);
        if(vst[b]) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}