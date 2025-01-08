#include<bits/stdc++.h>
using namespace std;       

const int sz = 1024;
vector<int>mat[sz];
bool vst[sz];

void dfs_(int s, int&cnt)
{
    cnt++;
    vst[s]=1;
    for(int c:mat[s])
        if(!vst[c]) dfs_(c,cnt);
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
    int cnt = 0, s; cin>>s;
    dfs_(s,cnt);
    cout<<cnt<<endl;
    return 0;
}

/*
input: 7 6
0 1
1 2
2 3
1 3
4 0
5 6
1
*/