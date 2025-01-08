#include<bits/stdc++.h>
using namespace std;

vector<int> mat[1005];
int vst[1005];
int lvl[1005];

bool bfs_(int src, int des)
{
    queue<int>q;
    q.push(src);
    vst[src]=true;
    lvl[src]=0;
    bool flag = false;

    while(!q.empty())
    {
        int p = q.front(); q.pop();

        if(p==des) flag = true;

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
    return flag;
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
        memset(lvl, -1, sizeof(lvl));
        bfs_(src,des) ? cout<<lvl[des]<<endl : cout<<"-1\n";
    }

    return 0;
}