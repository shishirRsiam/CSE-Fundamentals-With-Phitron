#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb push_back
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;


/*Time   :   00:22:47
Date  	 :   07-06-2024
Author   :   shishirRsiam
File  	 :   A_Greg_and_Array.cpp*/



int main()
{
    code by shishirRsiam

    int n,m,k,N = 100010+5; cin>>n>>m>>k;

    vec a(n);
    loop(0,i,n) cin>>a[i];

    vec change(m+2), val(m+2);
    vector<pi>dir(m+2);
    vector<ll>diff(N);
    loop(0,i,m) 
    {
        int x, y, z; cin>>x>>y>>z;
        x--, y--;
        dir[i] = {x, y};
        val[i] = z;
    }

    while(k--)
    {
        int x,y; cin>>x>>y;
        x--, y--;
        change[x]++, change[y+1]--;
    }

    loop(1,i,m) change[i] += change[i-1];

    loop(0,i,m)
    {
        int x = dir[i].first, y = dir[i].second;
        ll value = val[i] * change[i];
        diff[x] += value;
        diff[y+1] -= value;
    }

    loop(1,i,n) diff[i] += diff[i-1];

    loop(0,i,n) cout<<diff[i] + a[i]<<" ";

    return 0;
}