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
 
    ll ans = 0;
    int l = 0, r = 0;
    while(l<n and r<m)
    {
        ll count1 = 0, count2 = 0, cur = a[l];
        while(l<n and a[l]==cur) count1++, l++;
        while(r<m and b[r] < cur) r++;
        while(r<m and b[r]==cur) count2++, r++;
        ans += (1LL*count1*count2);
    }
    cout<<ans<<'\n';
    return 0;
}


// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C