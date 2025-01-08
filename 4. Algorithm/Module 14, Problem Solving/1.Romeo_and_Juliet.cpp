#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int>mat[N];
bool vst[N];
int dis[N];

void bfs_(int s)
{
    vst[s]=true;
    dis[s]=0;
    queue<int>q; q.push(s);
    while(!q.empty())
    {
        int p = q.front(); q.pop();
        for(int c:mat[p])
        {
            if(!vst[c])
            {
                q.push(c);
                dis[c]=dis[p]+1;
                vst[c]=true;
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
    for(int i=0;i<n;i++) dis[i] = -1;

    int s,d,k; cin>>s>>d>>k;
    bfs_(s);
    
    // cout<<dis[d]<<endl;
    if(dis[d] != -1 and dis[d]<=k*2) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}