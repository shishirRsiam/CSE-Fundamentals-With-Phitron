#include <bits/stdc++.h>

using namespace std;

vector<int> cache;

int solve(int n)
{
    if(n == 0) return 0;
    if(n == 1 or n == 2) return 1;
    if(n == 3) return 2;

    if(cache[n] != -1) return cache[n];

    return solve(n-1) + solve(n-2) + solve(n-3) + solve(n-4);
}

int main()
{
    int n; cin>> n; 
    cache.resize(n + 5, -1);
    cout<<solve(n)<<endl;

    return 0;
}
