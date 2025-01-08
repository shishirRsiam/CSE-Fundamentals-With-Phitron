#include<bits/stdc++.h>
using namespace std;

const int N = 1024;
char mat[N][N];
bool vst[N][N];

vector<pair<int,int>> d
= {{0,1},{0,-1},{-1,0},{1,0}};

int n,m;
bool isValid(int i, int j)
{
    return (i>=0 and j>=0 and i<n and j<m);
}

int bfs_(int si, int sj)
{
    int cnt = 1;
    vst[si][sj]=true;
    queue<pair<int,int>>q; q.push({si,sj});
    while(!q.empty())
    {
        auto p = q.front(); q.pop();
        int a = p.first, b = p.second;
        for(int i=0;i<4;i++)
        {
            int ci = a+d[i].first, cj = b+d[i].second;
            if(isValid(ci,cj) and !vst[ci][cj] and mat[ci][cj]=='.')
            {
                cnt++;
                vst[ci][cj]=true;
                q.push({ci,cj});
            }
        }
    }
    return cnt;
}


int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>mat[i][j];
    }

    vector<int>ans;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!vst[i][j] and mat[i][j]=='.')
            {
                ans.push_back(bfs_(i,j));
            }
        }
    }

    if(ans.empty()) 
    {
        cout<<"0\n";
        return 0;
    }
    int a = 'a' - 'A';
    sort(ans.begin(),ans.end());
    for(int v:ans) cout<<v<<" ";

    return 0;
}