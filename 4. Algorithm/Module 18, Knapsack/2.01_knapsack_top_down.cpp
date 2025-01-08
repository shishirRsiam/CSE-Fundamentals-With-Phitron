#include<bits/stdc++.h>
#define ll long long 
using namespace std;

const int N = 1024;

ll val[N], waith[N];
ll dp[N][N];

ll knapsack(ll n, ll w)
{
    if(!n or !w) return 0;
    if(dp[n-1][w] != -1) return dp[n-1][w];

    if(waith[n-1]<=w)
    {
        ll op1 = knapsack(n-1, w-waith[n-1]) + val[n-1];
        ll op2 = knapsack(n-1, w);
        return dp[n-1][w] = max(op1, op2);
    }
    else return dp[n-1][w] = knapsack(n-1, w);
}

int main()
{
    ll n; cin>>n;
    for(int i=0;i<n;i++) cin>>val[i];
    for(int i=0;i<n;i++) cin>>waith[i];

    ll w; cin>>w;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
            dp[i][j]=-1;
    }
    
    cout<<knapsack(n,w);
    return 0;
}

/*
3
4 5 2
2 5 3
5


*/