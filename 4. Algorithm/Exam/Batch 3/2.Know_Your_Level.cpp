#include<bits/stdc++.h>
using namespace std;

const int sz = 1e5+5;
vector<int>mat[sz];
bool vst[sz];
int lvl[sz];
vector<int>ans;

void bfs_(int s, int l)
{
    queue<int>q; q.push(s);

    lvl[s]=0;
    vst[s]=true;

    while(!q.empty())
    {
        int p = q.front(); q.pop();
        if(lvl[p]==l) ans.push_back(p);
        for(int c:mat[p])
        {
            if(!vst[c]) 
            {
                q.push(c);
                lvl[c]=lvl[p]+1;
                vst[c]=true;
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
    memset(lvl,-1,sizeof(lvl));

    int s = 0, l; cin>>l;
    bfs_(s,l);
    sort(ans.begin(),ans.end());
    if(ans.empty()) cout<<"-1\n";
    else for(int v:ans) cout<<v<<" ";
    return 0;
}