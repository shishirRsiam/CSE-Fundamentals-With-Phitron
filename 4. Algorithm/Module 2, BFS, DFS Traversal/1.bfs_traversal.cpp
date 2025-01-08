#include<bits/stdc++.h>
using namespace std;

vector<int> mat[1005];
vector<bool> vst(1005, true);
bool vst[1005];

void bfs_(int source)
{
    queue<int>q;
    q.push(source);
    vst[source]=true;

    while(!q.empty())
    {
        int p = q.front(); q.pop();

        cout<<p<<endl;

        for(int v:mat[p])
        {
            if(vst[v]) 
                q.push(v),vst[v]=true;
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
    return 0;
}

/*
input: 5 6 
0 1
1 2 
0 4 
1 3
2 0 
3 4
0
*/