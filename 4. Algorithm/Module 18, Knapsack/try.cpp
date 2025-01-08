#include<bits/stdc++.h>
#define ll long long 
using namespace std;


int main()
{
    ll n,W; cin>>n>>W;
    ll val[n], w[n];

    for(int i=0;i<n;i++) cin>>w[i]>>val[i];

    ll dp[n+1][W+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(!i or !j) dp[i][j]=0;
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=W;j++)
        {
            if(w[i-1]<=j)
            {
                ll op1 = dp[i-1][j-w[i-1]] + val[i-1];
                ll op2 = dp[i-1][j];
                dp[i][j] = max(op1, op2);
            }
            else dp[i][j] = dp[i-1][j];
        }
    }

    // for(int i=0;i<=n;i++)
    // {
    //     for(int j=0;j<=W;j++)
    //         cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }

    cout<<dp[n][W];

    return 0;
}

