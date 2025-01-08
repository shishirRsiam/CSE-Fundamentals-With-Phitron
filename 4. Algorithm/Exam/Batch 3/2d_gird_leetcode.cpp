#include<bits/stdc++.h>
using namespace std;
int n,m;
const int sz=200;
int mat[sz][sz];
bool vst[sz][sz];

vector<pair<int,int>>pr = {{0,1},{-1, 0},{0, -1},{1,0}};

int t;

bool isValid(int i, int j)
{
    if(i<0 or i>=n or j<0 or j>=m) return false;
    return true;
}

void dfs_(int si, int sj, int c)
{
    mat[si][sj]=c;
    vst[si][sj]=true;
    for(int i=0;i<4;i++)
    {
        int ci = si+pr[i].first;
        int cj = sj+pr[i].second;
        if(isValid(ci, cj) and !vst[ci][cj] and mat[ci][cj]==t)
            dfs_(ci, cj, c);
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

    int si,sj; cin>>si>>sj;
    t = mat[si][sj];
    int c; cin>>c;
    dfs_(si,sj,c);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}

/*
input: 3 3
1 1 1
1 1 0
1 0 1
1 1
2
*/