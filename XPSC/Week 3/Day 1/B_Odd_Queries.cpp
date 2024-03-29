#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n,q; cin>>n>>q;
        vec a(n);
        loop(0,i,n) cin>>a[i];

        vec pref;
        int sum = 0;
        pref.pb(sum);
        loop(0,i,n)
        {
            sum += a[i];
            pref.pb(sum);
        }
        // for(int v:pref) cout<<v<<" ";
        // cout<<"\n";
        while(q--)
        {
            int a, b, c; cin>>a>>b>>c;
            a--;
            int product = c*(b-a);
            int ok = pref.back() - (pref[b]-pref[a]) + product;
            // cout<<pref[a]<<" "<<pref[b]<<" "<<product<<" "<<ok<<"\n";
            ok%2?py:pn;
        }
    }

    return 0;
}