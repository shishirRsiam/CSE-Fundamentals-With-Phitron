#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
using namespace std;

vec a = {1, 3, 6, 4};
int dp[1005][20005];
int countSubset(int n, int sum)
{
    if(!sum) return true;
    if(!n) return false;

    if(dp[n][sum] != -1) return dp[n][sum];

    int cnt = countSubset(n-1, sum);
    if(a[n-1]<=sum)
        cnt += countSubset(n-1, sum-a[n-1]);
    return dp[n][sum] = cnt;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    cout<<countSubset(a.size(), 7)<<endl;
    for(int i=0;i<=a.size();i++)
    {
        for(int j=0;j<=7;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}