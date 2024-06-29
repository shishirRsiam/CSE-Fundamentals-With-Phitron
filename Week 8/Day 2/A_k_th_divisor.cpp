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




void testcase()
{
    ll n, k; cin>>n>>k;
    vec div;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            div.pb(i);
            if((n/i) != i) div.pb(n/i);
        }
    }
    sort(bee(div));

    // print(div);

    if(div.size() < k) cout<<"-1";
    else cout<<div[k-1]<<"\n";
}

int main()
{
    code by shishirRsiam

    // int t; cin>>t;
    // while(t--) 

        testcase();

    return 0;
}