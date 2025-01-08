#include<bits/stdc++.h>
using namespace std;

const int N = 30;
char mat[N][N];
bool vst[N][N];

vector<pair<int,int>>d
= {{1,0},{-1,0},{0,-1},{0,1}};

int m,n;
bool valid(int i, int j)
{
    return (i>=0 and j>=0 and i<n and j<m);
}

void dfs_(int si, int sj, int &cnt)
{
    cnt++;
    vst[si][sj]=true;
    for(int i=0;i<4;i++)
    {
        int ci = si+d[i].first, cj = sj+d[i].second;
        if(valid(ci,cj) and !vst[ci][cj] and mat[ci][cj]!='#')
            dfs_(ci,cj,cnt);
    }
}


int main()
{
    int t; cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>m>>n;
        int si,sj;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>mat[i][j];
                vst[i][j]=false;
                if(mat[i][j]=='@')
                    si= i, sj = j;
            }
        }
        int cnt = 0;
        dfs_(si,sj,cnt);
        cout<<"Case "<<i<<": "<<cnt<<endl;
    }

    return 0;
}