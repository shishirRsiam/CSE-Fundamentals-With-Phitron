#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const int N = 1024;
ll mat[N][N], dp[N][N];

int n,m;
ll recursion(int si, int sj)
{
    // cout<<si<<" "<<sj<<endl;
    if(dp[si][sj] != -1) return dp[si][sj];
    if(si==0 and sj==0) return mat[0][0];
    if(si<0 or sj<0 or si>=n or sj>=m) return 0;

    return dp[si][sj] = max(recursion(si, sj-1), recursion(si-1, sj)) + mat[si][sj];
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
            dp[i][j] = -1;
        }
        dp[n][m] = -1;
    }
    cout<<recursion(n-1, m-1);
    return 0;
}

/*
3 3
5 2 4
1 3 5
9 2 7
*/