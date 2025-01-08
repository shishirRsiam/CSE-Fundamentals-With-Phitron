#include<bits/stdc++.h>
using namespace std;

const long long N = 1e5+5;
long long dp[N];

long long fib(int n)
{
    if(n==0 or n==1) return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fib(n-1) + fib(n-2);
}

int main()
{
    long long n; cin>>n;
    for(int i=0;i<=n;i++) dp[i]=-1;
    cout<<fib(n);
    return 0;
}


/*

#include <bits/stdc++.h>
using namespace std;

vector<long long> dp;

long long fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main()
{
    long long n;
    cin >> n;
    dp.resize(n + 1, -1); // Resizing dp vector to accommodate n elements
    cout << fib(n);
    return 0;
}

*/