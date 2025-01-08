#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+5;
vector<int>mat[N];
bool vst[N];
int par[N];

void bfs_(int s)
{
    vst[s]=1;
    queue<int>q; q.push(s);
    while(!q.empty())
    {
        int p = q.front(); q.pop();
        for(int c:mat[p])
        {
            if(!vst[c])
            {
                q.push(c);
                vst[c]=1;
                par[c]=p;
            }
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
    for(int i=0;i<=n;i++) par[i]=-1;
    bfs_(1);

    vector<int>path;
    int x = n;
    while(x!=-1)
    {
        path.push_back(x);
        x = par[x];
    }

    if(path.size()==1)
    {
        cout<<"IMPOSSIBLE\n";
        return 0;
    }

    reverse(path.begin(),path.end());
    cout<<path.size()<<endl;
    for(int v:path) cout<<v<<" ";

    return 0;
}