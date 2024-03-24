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

    multiset<ll>ml;
    ll i = 0, j = 0, ans = 0;
    while(j<n)
    {
        ml.insert(a[j]);
        ll mn = *ml.begin(), mx = *ml.rbegin();
        if(mx - mn <= k) ans += j-i+1;
        else 
        {
            while(i<j and (mx - mn) > k)
            {
                auto it = ml.find(a[i++]);
                ml.erase(it);
                mn = *ml.begin(), mx = *ml.rbegin();
            }
            // mn = *ml.begin(), mx = *ml.rbegin();
            // if(mx - mx <= k) 
            ans += j-i+1;
        }
        j++;
    }

    cout<<ans<<"\n";

    return 0;
}