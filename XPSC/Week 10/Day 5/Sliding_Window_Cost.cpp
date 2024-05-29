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
 
 
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

 
 
int main()
{
    code by shishirRsiam
 
    int n, k; cin>>n>>k;
    vec a(n);
    loop(0,i,n) cin>>a[i];
 
    pbds<pi>pbds;
    
    int i = 0, j = 0, mid = (k - 1) / 2;
    while(j < k)
    {
        pbds.insert({a[j], j});
        j++;
    }

    auto it = *pbds.find_by_order(mid);

    ll cost = 0;
    for(auto p:pbds)
        cost += abs(p.first - it.first);
    cout<<cost<<" ";

    while(j < n)
    {
        cost -= abs(a[i] - it.first);
        pbds.erase({a[i], i});
        i++;

        pbds.insert({a[j], j});
        auto it_new = *pbds.find_by_order(mid);

        cost += abs(a[j] - it_new.first);
        if(k%2==0) cost -= (it_new.first - it.first);
        
        cout<<cost<<" ";
        it = it_new;
        j++;
    }
 
    return 0;
}