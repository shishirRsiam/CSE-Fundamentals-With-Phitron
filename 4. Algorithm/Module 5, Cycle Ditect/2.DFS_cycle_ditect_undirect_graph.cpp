#include<bits/stdc++.h>
using namespace std;

const int sz = 1024;
vector<int>mat[sz];
int parent[sz];
bool vst[sz];
bool flag;

void dfs_(int s)
{
    vst[s]=1;
    cout<<s<<" ";
    for(int c:mat[s])
    {
        if(vst[c] and parent[s] != c)
            flag = true;
        if(!vst[c])
        {
            parent[c]=s;
            dfs_(c);
        }
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
    memset(parent, -1, sizeof(parent));

    for(int i=0;i<n;i++)
    {
        if(!vst[i]) dfs_(i);
    }

    cout<<(flag ? "YES":"NO")<<endl;
    return 0;
}

/*
input: 7 6
0 1
1 2
3 4
4 5
5 6
6 3
*/