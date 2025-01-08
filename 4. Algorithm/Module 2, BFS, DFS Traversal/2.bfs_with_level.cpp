#include<bits/stdc++.h>
using namespace std;

vector<int>mat[1005];
bool vst[1005];
vector<int>level(1005,-1);

void bfs_(int source)
{
    queue<int>q;

    q.push(source);
    vst[source]=true;
    level[source]=0;

    while(!q.empty())
    {
        int p = q.front(); q.pop();

        cout<<p<<" "<<level[p]<<endl;

        for(int v:mat[p])
        {
            if(vst[v])
            {
                q.push(v);
                vst[v]=true;
                level[v]=level[p]+1;
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

    int source; cin>>source;
    bfs_(source);

    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<i<<" "<<level[i]<<endl;
    
    return 0;
}