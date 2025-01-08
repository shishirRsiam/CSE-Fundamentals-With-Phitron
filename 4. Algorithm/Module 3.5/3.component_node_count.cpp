#include<bits/stdc++.h>
using namespace std;

const int sz = 1024;
vector<int>mat[sz];
bool vst[sz];

void dfs_(int s,int&cnt)
{
    cnt++;
    vst[s]=1;
    for(int c:mat[s])
        if(!vst[c]) dfs_(c, cnt);
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
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int cnt = 0;
        if(!vst[i])
        {
            dfs_(i,cnt);
            a.push_back(cnt);
        }
    }
    sort(a.begin(),a.end());
    for(int v:a) cout<<v<<" ";
    return 0;
}

/*
input: 
6 5
0 1
0 2
0 3
2 3
4 5
*/