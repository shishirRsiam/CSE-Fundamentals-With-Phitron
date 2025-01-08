#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
using namespace std;

const int N = 1024;
int dp[N][N];

bool subset_sum(int i, vec&a, ll sum)
{
    if(!sum) return true;
    if(!i) return false;

    if(dp[i][sum] != -1) return dp[i][sum];

    bool ans = subset_sum(i-1, a, sum);
    if(a[i-1]<=sum)
        ans = ans or subset_sum(i-1, a, sum - a[i-1]);
    return dp[i][sum] = ans;
}

int main()
{
    int n,m; cin>>n>>m;
    vec a(n);

    for(int i=0;i<n;i++) cin>>a[i];
    memset(dp, -1, sizeof(dp));

    int t; cin>>t;
    while(t--)
    {
        int sum; cin>>sum;
        subset_sum(n, a, sum) ? cout<<sum<<" YES\n" : cout<<sum<<" NO\n";
    }

    cout<<endl;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=15;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}

/*
input: 
4
1 2 6 4
15
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

output: 
1 YES
2 YES
3 YES
4 YES
5 YES
6 YES
7 YES
8 YES
9 YES
10 YES
11 YES
12 YES
13 YES
14 NO
15 NO

-1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 
-1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
-1 1 1 1 0 0 0 0 0 0 0 0 0 0 0 0 
-1 1 1 1 0 0 1 1 1 1 0 0 0 0 0 0 
-1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 0 
*/

/*
module output: 
T F F F F F F F F F F F F F F F 
T T F F F F F F F F F F F F F F 
T T T T F F F F F F F F F F F F 
T T T T F F T T T T F F F F F F 
T T T T T T T T T T T T T T F F 
*/