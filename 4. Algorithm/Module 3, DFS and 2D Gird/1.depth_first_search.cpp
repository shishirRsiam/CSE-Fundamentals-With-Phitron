#include<bits/stdc++.h>
using namespace std;

const int sz = 1e5+5;
vector<int> mat[sz];
bool vst[sz];

void dfs(int src)
{
    cout<<src<<" ";
    vst[src] = true;
    for(int v:mat[src])
    {
        if(!vst[v]) dfs(v);
    }
}

int main()
{
    int n,e; cin>>n>>e;
    while(e--)
    {
        int a,b; cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    memset(vst, false, sizeof(vst));

    int src; cin>>src; 
    dfs(src);

    return 0;
}

/*
input: 6 6
0 1
0 2
0 3
1 4
3 5
3 2
0
*/