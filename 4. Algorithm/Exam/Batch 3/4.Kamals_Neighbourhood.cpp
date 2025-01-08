#include<bits/stdc++.h>
using namespace std;

const int sz = 1e5+1024;
vector<int>mat[sz];
bool vst[sz];

void dfs_(int s, int &cnt)
{
    vst[s]=true;
    for(int c:mat[s])
    {
        if(!vst[c])
            cnt++, dfs_(c, cnt);
    }
}

int main()
{
    int n, e; cin>>n>>e;
    while(e--)
    {
        int a,b; cin>>a>>b;
        mat[a].push_back(b);
    }

    int cnt = 0, s; cin>>s;
    dfs_(s,cnt);
    cout<<cnt;
    return 0;
}