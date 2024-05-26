#include<bits/stdc++.h>
using namespace std;


#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;



int main()
{
    
    int n; cin>>n;
    string s; cin>>s;

    map<char,deque<int>>mp;
    for(int i=0;i<n;i++)
        mp[s[i]].push_back(i);
    
    vector<int>perm(n);
    reverse(s.begin(), s.end());

    for(int i=0;i<n;i++)
    {
        perm[i] = mp[s[i]].front();
        mp[s[i]].pop_front();
    }
    reverse(perm.begin(), perm.end());

    pbds<int>pbds;
    long long ans  = 0;

    for(auto val:perm)
    {
        pbds.insert(val);
        ans += pbds.order_of_key(val);
        // cout<<val<<" ";
    }

    cout<<endl<<ans<<"\n";

    return 0;
}