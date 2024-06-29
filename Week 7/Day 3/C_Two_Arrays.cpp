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
    vec a(n), b(n);
    loop(0,i,n) cin>>a[i];
    loop(0,i,n) cin>>b[i];

    sort(bee(a));
    sort(bee(b));

    loop(0,i,n)
    {
        int dif = b[i] - a[i];
        if(dif < 0 or dif > 1)
        {
            pn;
            return;
        }
    }
    py;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}