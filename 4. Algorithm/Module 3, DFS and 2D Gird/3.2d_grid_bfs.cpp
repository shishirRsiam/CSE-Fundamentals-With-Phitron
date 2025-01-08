#include<bits/stdc++.h>
using namespace std;
const int sz = 1024;
char mat[sz][sz];
int lvl[sz][sz];
bool vst[sz][sz];
vector<pair<int, int>> pairs 
= {{0,1},{-1, -1},{-1,0},{1,1}};

int n,m;
bool isValid(int ci, int cj)
{
    if(ci<0 or ci>=n or cj<0 or cj>=m) return false;
    return true;
}

void bfs_(int ci, int cj)
{
    queue<pair<int,int>> q;
    q.push({ci, cj});
    vst[ci][cj] = true;
    lvl[ci][cj] = 0;
    while(!q.empty())
    {
        pair<int,int> p = q.front(); q.pop();

        int a = p.first, b = p.second;

        for(int i=0;i<4;i++)
        {
            int ci = a+pairs[i].first;
            int cj = b+pairs[i].second;
            if(isValid(ci, cj) and !vst[ci][cj])
            {
                q.push({ci, cj});
                vst[ci][cj] = true;
                lvl[ci][cj]= lvl[a][b]+1;
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>mat[i][j];
    }
    memset(vst,0,sizeof(vst));
    memset(lvl, -1,sizeof(lvl));
    int si, sj; cin>>si>>sj;

    bfs_(si, sj);

    cout<<lvl[0][3];

    return 0;
}