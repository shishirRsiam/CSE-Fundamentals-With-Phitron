#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int>mat[N];
bool vst[N];
int par[N];
bool flag;

void dfs_(int s,int &cnt)
{
    vst[s]=1;
    for(int c:mat[s])
    {
        if(vst[c] and c != par[s]) cnt++, flag = true;
        if(!vst[c]) par[c]=s, dfs_(c,cnt);
    }
}

int main()
{
    int n,e; cin>>n>>e;
    while(e--)
    {
        int u,v; cin>>u>>v;
        mat[u].push_back(v);
        mat[v].push_back(u);
    }

    for(int i=0;i<n;i++) par[i]=-1;

    int cnt = 0;
    for(int i=1;i<=n;i++)
        if(!vst[i]) dfs_(i,cnt);

    // cout<<(flag?"YES":"NO")<<endl;
    cout<<cnt/2<<endl;
    return 0;
}