#include<bits/stdc++.h>
using namespace std;

const int sz = 1024;
vector<int>mat[sz];
bool vst[sz];

void bfs_(int s, int &cnt)
{
    queue<int>q; q.push(s);
    vst[s]=true;
    cnt++;
    while(!q.empty())
    {
        int p = q.front(); q.pop();
        for(int c:mat[p])
        {
            if(!vst[c])
            {
                cnt++;
                q.push(c);
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
        int a, b; cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    int cnt = 0, s; cin>>s;
    bfs_(s,cnt);
    cout<<cnt<<endl;
    return 0;
}

/*
input: 6 5
6 5
0 1
0 2
0 3
2 3
4 5
2
*/