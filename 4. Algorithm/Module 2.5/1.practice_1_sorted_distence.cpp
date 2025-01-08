#include<bits/stdc++.h>
using namespace std;

vector<int> mat[1005];
int par[1005];
int vst[1005];

void path_bfs_(int src)
{
    queue<int>q;

    q.push(src);
    vst[src]=true;

    while(!q.empty())
    {
        int p = q.front(); q.pop();

        for(int v:mat[p])
        {
            if(!vst[v])
            {
                q.push(v);
                vst[v]=true;
                par[v]=p;
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

    int t; cin>>t;
    while(t--)
    {
        int src,des; cin>>src>>des;
        memset(vst, false, sizeof(vst));
        memset(par, -1, sizeof(par));

        path_bfs_(src);
        
        if(!vst[des]) cout<<"-1"<<endl;

        else 
        {
            int cnt = -1;
            while(des != -1)
            {
                cnt++;
                des = par[des];
            }
            cout<<cnt<<endl;
        }
    }

    return 0;
}