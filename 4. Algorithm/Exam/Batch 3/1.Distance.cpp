#include<bits/stdc++.h>
using namespace std;

const int sz = 1e5+1;
vector<int> mat[sz];
int dis[sz];
bool vst[sz];

void bfs_(int s)
{
    queue<int>q; q.push(s);
    vst[s]=true;
    dis[s]=0;

    while(!q.empty())
    {
        int p = q.front(); q.pop();
        
        for(int c:mat[p])
        {
            if(!vst[c])
            {
                q.push(c);
                vst[c]=true;
                dis[c]=dis[p]+1;
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
        memset(dis, -1, sizeof(dis));
        memset(vst, false, sizeof(vst));

        int s,d; cin>>s>>d;
        bfs_(s);
        vst[d] ? cout<<dis[d]<<endl : cout<<"-1\n";
    }

    return 0;
}

/*
input: 6 7
0 1
0 2
1 2
0 3
4 2
3 5
4 3
6
0 5
1 5
2 5
2 3
1 4
0 0
*/