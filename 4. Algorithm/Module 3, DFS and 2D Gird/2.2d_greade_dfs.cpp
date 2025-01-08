#include<bits/stdc++.h>
using namespace std;
 
const int sz=1024;
char a[sz][sz];
bool vst[sz][sz];
vector<pair<int,int>> pairs{{0,-1},{0,1},{-1,0},{1,0}}; 

int n,m;
bool isValid(int ci, int cj)
{
    if(ci<0 or ci>=n or cj<0 or cj>=n) return false;
    return true;
}

void dfs_gird_(int si, int sj)
{
    cout<<si<<" "<<sj<<endl;
    vst[si][sj]=true;
    for(int i=0;i<4;i++)
    {
        int ci = si+pairs[i].first;
        int cj = sj+pairs[i].second;
        if(isValid(ci,cj) and !vst[ci][cj])
        {
            dfs_gird_(ci,cj);
        }
    }
}

int main()
{
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }

    memset(vst, false, sizeof(vst));
    int si, sj; cin>>si>>sj; 
    dfs_gird_(si, sj);

    return 0;
}

/*
input: 3 4
....
....
....
1 1
*/