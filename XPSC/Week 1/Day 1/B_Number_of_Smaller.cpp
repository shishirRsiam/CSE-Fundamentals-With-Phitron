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
 
    int cnt = 0, l = 0, r = 0;
    while(l != n and r != m)
    {
        if(a[l]<b[r]) l++, cnt++;
        else cout<<cnt<<" ", r++;
    }
    while(r != m) cout<<cnt<<" ", r++;
 
    return 0;
}



// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B