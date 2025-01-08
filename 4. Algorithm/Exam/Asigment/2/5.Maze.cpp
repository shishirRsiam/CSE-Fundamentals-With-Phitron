#include<bits/stdc++.h>
using namespace std;

const int N = 1024;
char mat[N][N];
bool vst[N][N];
map<pair<int,int>,pair<int,int>>par;

vector<pair<int,int>> d
= {{-1,0},{1,0},{0,-1},{0,1}};

int n,m;
bool isValid(int i, int j)
{
    return (i>=0 and j>=0 and i<n and j<m);
}

void bfs_(int si, int sj)
{
    vst[si][sj]=true;
    queue<pair<int,int>>q; q.push({si,sj});
    while(!q.empty())
    {
        auto p = q.front(); q.pop();
        int a = p.first, b = p.second;
        for(int i=0;i<4;i++)
        {
            int ci = a+d[i].first, cj = b+d[i].second;
            if(isValid(ci,cj) and !vst[ci][cj] and mat[ci][cj]!='#')
            {
                par[{ci,cj}] = {a,b};
                vst[ci][cj]=true;
                q.push({ci,cj});
            }
        }
    }
}

int main()
{
    pair<int,int>A,B;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]=='D') A = {i,j};
            else if(mat[i][j]=='R') B = {i,j};
            par[{i,j}] = {-1,-1};
        }
    }

    bfs_(A.first, A.second);

    if(vst[B.first][B.second])
    {
        auto x = B;
        while (true) 
        {
            x = par[x];
            if (par[x] == make_pair(-1, -1)) break;
            mat[x.first][x.second] = 'X';
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<mat[i][j];
        cout<<endl;
    }

    return 0;
}