#include<bits/stdc++.h>
using namespace std;

const int sz = 1024;
vector<int>mat[sz];
bool pathvst[sz];
bool vst[sz];
bool flag;

void dfs_(int s)
{
    vst[s]=true;
    pathvst[s]=true;
    for(int c:mat[s])
    {
        if(pathvst[c]) flag = true;
        if(!vst[c]) dfs_(c);
    }
    pathvst[s]=false;
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
    {
        if(!vst[i]) dfs_(i);
    }
    cout<<(flag ? "YES":"NO")<<endl;

    return 0;
}

/*
input: 
7 8
5 6
4 5
0 4
0 6
0 1
1 2
2 3
3 1 
*/