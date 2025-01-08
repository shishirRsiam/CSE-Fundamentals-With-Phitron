#include<bits/stdc++.h>
using namespace std;

const int sz = 1024;
vector<int>mat[sz];
bool vst[sz];


void dfs_(int s)
{
    vst[s]=true;
    for(int c:mat[s])
    {
        if(!vst[c]) dfs_(c);
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

    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(!vst[i])
        {
            cnt++;
            dfs_(i);
        }
    }
    cout<<cnt<<endl;
    return 0;
}

/*
input: 9 7
0 1
0 2
0 3
2 3
4 5
6 8
7 6
*/