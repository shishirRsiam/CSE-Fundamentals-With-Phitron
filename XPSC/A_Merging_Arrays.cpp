#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m; cin>>n>>m;
    vec a(n), b(m);
    loop(0, i, n) cin>>a[i];
    loop(0, i, m) cin>>b[i];

    int i = 0, j = 0;
    while(i<n and j<m)
    {
        if(a[i]<=b[j]) cout<<a[i++]<<" ";
        else cout<<b[j++]<<" ";
    }
    while(i<n) cout<<a[i++]<<" ";
    while(j<m) cout<<b[j++]<<" ";

    return 0;
}


// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A