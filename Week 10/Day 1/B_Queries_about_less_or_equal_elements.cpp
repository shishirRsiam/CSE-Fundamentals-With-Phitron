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




int main()
{
    code by shishirRsiam

    int n,m,x; cin>>n>>m;
    vec a(n);
    loop(0,i,n) cin>>a[i];

    sort(bee(a));

    multiset<int>ml;
    map<int,int>mp;
    loop(0,i,n)
    {
        ml.insert(a[i]);
        mp[a[i]] = i+1;
    }
    while(m--)
    {
        cin>>x;
        if(x < a[0]) 
        {
            cout<<"0 ";
            continue;
        }

        auto it = ml.lower_bound(x);
        if(it == ml.end() or *it != x) it--;
        cout<<mp[*it]<<" ";
    }

    return 0;
}