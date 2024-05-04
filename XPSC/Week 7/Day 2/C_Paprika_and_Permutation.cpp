#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;




void testcase()
{
    int n; cin>>n;
    vec a;
    unordered_map<int,bool>mp;
    loop(0,i,n)
    {
        int x; cin>>x;
        if(x<=n)
        {
            if(!mp[x]) mp[x] = true;
            else a.pb(x);
        }
        else a.pb(x);
    }

    sort(bee(a));

    int x = 0, ans = 0;
    loop(1,i,n+1)
    {
        if(!mp[i])
        {
            int val = ((a[x++]-1) / 2);
            if(i <= val) ans++;
            else 
            {
                cout<<"-1\n";
                return;
            }
        }
    }
    cout<<ans<<"\n";
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}