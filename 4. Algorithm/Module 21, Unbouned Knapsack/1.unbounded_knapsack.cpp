#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
using namespace std;

const int N = 1024;
int dp[N][N];

int unbounded_knapsack(int n, int s, vec&val, vec&wat)
{
    if(!n or !s) return 0;
    if(dp[n][s] != -1) return dp[n][s];
    if(wat[n-1]<=s)
    {
        int pick = unbounded_knapsack(n, s-wat[n-1], val, wat) + val[n-1];
        int not_pick = unbounded_knapsack(n-1, s, val, wat);
        return dp[n][s] = max(pick, not_pick);
    }
    else return dp[n][s] = unbounded_knapsack(n-1, s, val, wat);
}

int main()
{
    int n, s; cin>>n>>s;
    vec val(n), wat(n);
    for(int i=0;i<n;i++) cin>>val[i];
    for(int i=0;i<n;i++) cin>>wat[i];
    memset(dp, -1, sizeof(dp));
    cout<<unbounded_knapsack(n, s, val, wat)<<endl;
    return 0;
}

/*
4 6
5 3 2 4
4 1 3 2
*/