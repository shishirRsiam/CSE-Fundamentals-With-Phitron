#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
using namespace std;

int dp[1005][2005];
// vec a = {1,1,1,1,1};
vec a = {1};
// vec a = {1,1,2,3};

int cnt_sub(int n, int sum)
{
    if(!sum) return true;
    if(!n) return false;
    if(dp[n][sum] != -1) return dp[n][sum];

    int cnt = cnt_sub(n-1, sum);
    if(a[n-1]<=sum)
        cnt += cnt_sub(n-1, sum - a[n-1]);
    return dp[n][sum] = cnt;
}

int main()
{
    int dif = 1, sum = 0;
    for(int v:a) sum += v;
    int target = (sum + dif) / 2;
    
    memset(dp, -1, sizeof(dp));
    cout<<cnt_sub(a.size(), target)<<endl;
    return 0;
}