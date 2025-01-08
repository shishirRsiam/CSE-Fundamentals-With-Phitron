#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int>mat[N];
bool vst[N];

void dfs_(int s)
{
    vst[s]=1;
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
    vector<int>x;
    for(int i=1;i<=n;i++)
    {
        if(!vst[i])
        {
            x.push_back(i);
            dfs_(i);
        }
    }
    n = x.size();
    cout<<n-1<<endl;
    for(int i=0;i<n-1;i++)
        cout<<x[i]<<" "<<x[i+1]<<endl;
    return 0;
}