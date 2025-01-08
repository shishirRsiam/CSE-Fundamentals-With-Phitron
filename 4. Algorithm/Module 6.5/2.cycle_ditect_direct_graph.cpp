#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> mat[N];
bool path[N];
bool vst[N];
bool flag;

void dfs_(int s)
{
    vst[s]=1;
    path[s]=1;
    for(int c:mat[s])
    {
        if(path[c]) flag = true;
        if(!vst[c]) dfs_(c);
    }
    path[s]=0;
}

int main()
{
    int n,e; cin>>n>>e;
    while(e--)
    {
        int a,b; cin>>a>>b;
        mat[a].push_back(b);
    }
    for(int i=0;i<n;i++)
        if(!vst[i]) dfs_(i);

    cout<<(flag?"YES":"NO");
    return 0;
}
/*
input: 
7 7
6 5
5 3
3 1
1 2
2 4
4 0
0 6
*/