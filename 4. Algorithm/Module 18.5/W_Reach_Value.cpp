#include<bits/stdc++.h>
#define ll long long 
using namespace std;

bool recursion(ll n, ll N)
{
    if(n==N) return true;
    if(n>N) return false;
    return recursion(n*10, N) or recursion(n*20, N);
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        cout<<(recursion(1, n) ? "YES" : "NO")<<endl;
    }
    return 0;
}