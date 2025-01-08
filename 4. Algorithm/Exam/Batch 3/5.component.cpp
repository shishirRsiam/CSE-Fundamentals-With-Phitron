#include<bits/stdc++.h>
using namespace std;

vector<int> mat[1001];
bool vst[1001];

void dfs_(int s, int &sz)
{
    vst[s]=true; sz++;
    for(int c:mat[s])
        if(!vst[c]) dfs_(c,sz);
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

    vector<int>ans;
    for(int i=0;i<1001;i++)
    {
        int sz = 0;
        if(!vst[i]) dfs_(i, sz);
        if(sz>1) ans.push_back(sz);
    }
    sort(ans.begin(),ans.end());
    for(int v:ans) cout<<v<<" ";

    return 0;
}

/*
input: 9 7
0 1
1 2
0 2
2 3
4 5
5 7
8 9
*/