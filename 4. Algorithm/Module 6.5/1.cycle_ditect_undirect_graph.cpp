#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> mat[N];
int parent[N];
bool vst[N];
bool flag;

void dfs_(int s)
{
    vst[s]=1;
    for(int c:mat[s])
    {
        if(vst[c] and c != parent[s]) flag = true;
        if(!vst[c]) parent[c] = s, dfs_(c);
    }
}

int main()
{
    int n, e; cin>>n>>e;
    while(e--)
    {
        int a,b; cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    for(int i=0;i<n;i++)
        if(!vst[i]) dfs_(i);
    
    cout<<(flag?"YES":"NO");
    return 0;
}

/*
input: 
7 10
0 4
0 5
0 6
1 2
1 4
2 3
2 6
3 4
3 5
4 5
*/