#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
using namespace std;

vec a = {1, 2, 4, 6, 5};
int dp[1005][20003];

bool equalSum(int n, ll sum)
{
    if(!sum) return true;
    if(!n) return false;
    if(dp[n][sum] != -1) return dp[n][sum];
    bool flag = equalSum(n-1, sum);
    if(a[n-1]<=sum)
        flag = flag or equalSum(n-1, sum - a[n-1]);

    return dp[n][sum] = flag;
}

int main()
{
    ll sum = 0;
    for(int v:a) sum += v;
    cout<<sum<<endl;
    if(sum%2) cout<<"NO\n";
    else 
    {
        cout<<"join\n";
        memset(dp, -1, sizeof(dp));
        equalSum(a.size(), sum/2) ? cout<<"YES\n" : cout<<"NO\n";
    }
    return 0;
}