#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> value, waith;

ll knapsack(ll n, ll W)
{
    if(!n or !W) return 0;

    if(waith[n-1] <= W)
    {
        // duita kaj, 1: nibo, 2: nibo na.
        ll op1 = knapsack(n-1, W-waith[n-1]) + value[n-1];
        ll op2 = knapsack(n-1, W);
        return max(op1,op2);
    }

    // jehetu waith[n-1] W er theke boro tai na diyei dekhte hobe
    else return knapsack(n-1, W); 
}

int main()
{
    ll n; cin>>n;
    value.resize(n); waith.resize(n);
    for(int i=0;i<n;i++) cin>>value[i];
    for(int i=0;i<n;i++) cin>>waith[i];
    ll W; cin>>W;
    cout<<knapsack(n,W);
    return 0;
}

// Time Complexibity: 2^n;

/*
input: 3
4 5 2
2 5 3
5
*/