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


/*Time   :   01:02:29
Date  	 :   14-06-2024
Author   :   shishirRsiam
File  	 :   D_Districts_Connection.cpp*/


bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    int n,val; cin>>n;
    map<int,vector<int>>mp;
    loop(1,i,n+1)
    {
        cin>>val;
        mp[val].pb(i);
    }
    if(mp.size() == 1)
    {
        pn;
        return false;
    }

    py;
    vector<vector<int>>idx;
    for(auto [key, id]:mp) idx.pb(id);

    auto first = idx[0];
    idx.erase(idx.begin());
    for(auto vecc:idx)
        for(auto id:vecc)
            cout<<*first.begin()<<" "<<id<<by 

    first.erase(first.begin());
    for(auto id:first)
        cout<<id<<" "<<idx[0][0]<<by 

    return true;
}

int main()
{
    code by shishirRsiam

    int testcase; cin>>testcase; while(testcase--) 

        _solve_koro_taratari__aro_solve_korte_hobe();

    return 0;
}