#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define PB(x) push_back(x)
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k; cin>>n>>k;
    vec a(n);
    loop(0,i,n) cin>>a[i];

    ll i = 0, j = 0, ans = 0;
    unordered_map<ll, int>mp;
    while(j<n)
    {
        mp[a[j]]++;
        while(i<n and mp.size() > k)
        {
            mp[a[i]]--;
            if(mp[a[i]]==0) mp.erase(a[i]);
            i++;
        }
        ans += (j-i+1);
        j++;
    }
    cout<<ans<<"\n";

    return 0;
}