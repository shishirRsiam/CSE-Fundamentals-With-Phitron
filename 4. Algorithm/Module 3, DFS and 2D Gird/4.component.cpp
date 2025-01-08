#include<bits/stdc++.h>
using namespace std;

const int sz = 1024;
vector<int>mat[sz];
bool vst[sz];

void dfs(int s)
{
    cout<<s<<endl;
    vst[s]=true;
    for(int c:mat[s])
    {
        if(not vst[c]) dfs(c);
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

    memset(vst,false,sizeof(vst));

    int count_component = 0;

    for(int i=0;i<n;i++)
    {
        if(not vst[i]) dfs(i), count_component++;
    }
    cout<<"\ncount_component-> "<<count_component<<endl;
    return 0;
}

/* 
input: 6 5
0 1 
1 2
0 2
3 4
3 5
*/