#include<bits/stdc++.h>
using namespace std;

const int N = 105;
vector<int>mat[N];
bool vst[N];
int dis_from_src[N];
int dis_from_tar[N];

bool flag;
void bfs_(int s)
{
    vst[s]=1;
    if(flag) dis_from_src[s]=0;
    else dis_from_tar[s]=0;

    queue<int>q; q.push(s);
    while(!q.empty())
    {
        int p = q.front(); q.pop();
        for(int c:mat[p])
        {
            if(!vst[c])
            {
                if(flag) dis_from_src[c] = dis_from_src[p]+1;
                else dis_from_tar[c] = dis_from_tar[p]+1;
                q.push(c);
                vst[c]=1;
            }
        }
    }
}

int main()
{
    int t; cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,e; cin>>n>>e;
        while(e--)
        {
            int a,b; cin>>a>>b;
            mat[a].push_back(b);
            mat[b].push_back(a);
        }
        int s,t; cin>>s>>t;

        flag = true;
        for(int i=0;i<n;i++)
        {
            dis_from_src[i]=-1;
            vst[i]=false;
        }
        bfs_(s);

        flag = false;
        for(int i=0;i<n;i++)
        {
            dis_from_tar[i]=-1;
            vst[i]=false;
        }
        bfs_(t);

        int ans = INT_MIN;
        for(int i=0;i<n;i++)
        {
            ans = max(ans, dis_from_src[i]+dis_from_tar[i]);
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
        for(int i=0;i<n;i++)
        {
            mat[i].clear();
        }
    }
    return 0;
}