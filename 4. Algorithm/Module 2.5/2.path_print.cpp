#include<bits/stdc++.h>
using namespace std;

vector<int> mat[1005];
int vst[1005];
int lvl[1005];

void bfs_lvl()
{
    queue<int>q;
    int src=0;
    q.push(src);
    vst[src]=true;
    lvl[src]=0;

    while(!q.empty())
    {
        int p = q.front(); q.pop();

        for(int v:mat[p])
        {
            if(!vst[v])
            {
                q.push(v);
                vst[v]=true;
                lvl[v]=lvl[p]+1;
            }
        }
    }
}

int main()
{
    int n,e; cin>>n>>e;
    memset(vst, false, sizeof(vst));
    memset(lvl, -1, sizeof(lvl));
    while(e--)
    {
        int a,b; cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    int l; cin>>l;
    bfs_lvl();
    vector<int>res;
    for(int i=0;i<n;i++)
    {
        if(l==lvl[i])
            res.push_back(i);
    }
    reverse(res.begin(),res.end());
    for(int v:res)
    {
        cout<<v<<" ";
    }
    return 0;
}