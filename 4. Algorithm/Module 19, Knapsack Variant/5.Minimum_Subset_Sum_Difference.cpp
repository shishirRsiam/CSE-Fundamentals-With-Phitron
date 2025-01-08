#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
using namespace std;



int main()
{
    vec a = {1, 5, 4, 11};
    int sum = 0, n = a.size();
    for(int v:a) sum += v;

    bool dp[n+1][sum+1];
    dp[0][0] = true;
    for(int i=1;i<=sum;i++) dp[0][i] = false;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(a[i-1] <= j)
            {
                bool pick = dp[i-1][j - a[i-1]];
                bool not_pick = dp[i-1][j];
                dp[i][j] = pick or not_pick;
            }
            else dp[i][j] = dp[i-1][j];
        }
    }

    vec possible_sum;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
            if(dp[i][j]) possible_sum.push_back(j);
    }

    ll mn = INT_MAX;
    for(auto v:possible_sum)
    {
        ll s1 = v, s2 = sum - v;
        mn = min(mn, abs(s1 - s2));
    }

    cout<<mn<<endl;

    return 0;
}