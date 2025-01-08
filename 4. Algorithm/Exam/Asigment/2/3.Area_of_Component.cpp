#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>>pr
= {{-1, 0},{1,0},{0,-1},{0,1}};
const int sz = 1024;
char mat[sz][sz];
bool vst[sz][sz];
int n,m;

bool isValid(int i,int j)
{
    return (i>=0 and j>=0 and i<n and j<m);
}

void dfs_(int si, int sj, int &cnt)
{
    cnt++;
    vst[si][sj]=1;
    // cout<<si<<" "<<sj<<endl;
    for(int i=0;i<4;i++)
    {
        int ci = si+pr[i].first, cj = sj+pr[i].second;
        if(isValid(ci,cj) and !vst[ci][cj] and mat[ci][cj]=='.')
            dfs_(ci,cj,cnt);
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

    int ans = INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int cnt = 0;
            if(!vst[i][j] and mat[i][j]=='.') 
            {
                dfs_(i,j,cnt);
                ans = min(ans,cnt);
            }
        }
    }

    ans == INT_MAX ? cout<<"-1" : cout<<ans;

    return 0;
}