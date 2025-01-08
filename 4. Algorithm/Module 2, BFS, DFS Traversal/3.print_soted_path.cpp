#include<bits/stdc++.h>
using namespace std;

vector<int> mat[1005]; //matrix rakhar jnno
vector<bool>vst(1005,true); //visit track rakhar jnno
vector<int>lvl(1005,-1); //level trac rakhar jnno
vector<int>par(1005,-1); // prarent track rakhar jonno

void bfs_path_(int scr)
{
    queue<int>q;

    q.push(scr);
    lvl[scr]=0;
    vst[scr]=false;

    while(!q.empty())
    {
        int p = q.front(); q.pop();

        cout<<p<<" "<<lvl[p]<<endl;

        for(int v:mat[p])
        {
            if(vst[v])
            {
                q.push(v);
                lvl[v]=lvl[p]+1;
                vst[v]=false;
                par[v]=p;
            }
        }
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

    int scr,des; cin>>scr>>des;
    bfs_path_(scr);

    vector<int>path;
    int x = des;
    while(x != -1)
        path.push_back(x), x = par[x];
    
    for(auto i=path.rbegin(); i!=path.rend();i++)
        cout<<*i<<" ";
    
    return 0;
}