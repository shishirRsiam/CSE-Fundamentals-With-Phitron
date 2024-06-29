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

    int n,k; cin>>n>>k;

    vector<int>a(n);
    loop(0,i,n) cin>>a[i];

    pbds<pi>pbds;
    int i = 0, j = 0, pos = k / 2;
    if(k%2==0) pos--;

    while(j<n)
    {
        pbds.insert({a[j], j});
        if(j-i+1 == k)
        {
            auto it = pbds.find_by_order(pos);
            cout<<it->first<<" ";
            pbds.erase({a[i], i});
            i++;
        }
        j++;
    }    

    return 0;
}