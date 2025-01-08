#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
using namespace std;

int main()
{
    int n, s; cin>>n>>s;
    vec val(n), wat(n);
    for(int i=0;i<n;i++) cin>>val[i];
    for(int i=0;i<n;i++) cin>>wat[i];

    int dp[n+1][s+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=s;j++)
            if(!i or !j) dp[i][j] = 0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            if(wat[i-1]<=j)
            {
                int pick = dp[i][j-wat[i-1]] + val[i-1];
                int not_pick = dp[i-1][j];
                dp[i][j] = max(pick, not_pick);
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout<<dp[n][s]<<endl;
    return 0;
}

/*
4 6
5 3 2 4
4 1 3 2
*/