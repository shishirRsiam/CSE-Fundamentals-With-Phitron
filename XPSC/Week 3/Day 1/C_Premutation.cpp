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
        int n; cin>>n;
        unordered_map<int,vec>mp;
        for(int i=0;i<n;i++)
        {
            vec v;
            for(int j=0;j<n-1;j++)
            {
                int x; cin>>x;
                v.pb(x);
            }
            for(int a:v)
                mp[v.back()].pb(a);
        }
        int last = 0;
        for(auto x:mp)
        {
            if(x.second.size()==n-1) 
                for(int v:x.second) cout<<v<<" ";
            else if(x.second.size()>n) last = x.first;
        }
        cout<<last<<"\n";
    }

    return 0;
}