#include<bits/stdc++.h>
using namespace std;

const int sz = 1024;
vector<int>mat[sz];
int parent[sz];
bool vst[sz];
bool flag;
void bfs_(int s)
{
    queue<int>q; q.push(s);
    vst[s]=1;
    while(!q.empty())
    {
        int p = q.front(); q.pop();
        // cout<<p<<" ";
        for(int c:mat[p])
        {
            if(vst[c] and parent[p] != c) flag = true;
            if(!vst[c])
            {
                q.push(c);
                vst[c]=1;
                parent[c]=p;
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
    memset(parent, -1, sizeof(parent));
    for(int i=0;i<n;i++)
    {
        if(!vst[i])
        {
            bfs_(i);
        }
    }

    cout<<(flag ? "YES" : "NO");
    // flag ? cout<<"YES" : cout<<"NO";

    return 0;
}

/*
input: 7 6
0 1
1 2
3 4
4 5
5 6
6 3

4 3
0 1
1 2
0 3
*/