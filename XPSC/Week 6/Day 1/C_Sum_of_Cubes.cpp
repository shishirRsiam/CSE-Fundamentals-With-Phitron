#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "nothing";
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
    ll x; cin>>x;

    vec pows;
    int N = 1e4+5;
    loop(1,i,N)
        pows.pb(pow(i, 3));
    
    for(int i=0;i<N;i++)
    {
        if(pows[i] >= x) break;

        ll need = x - pows[i];

        if(binary_search(bee(pows), need))
        {
            py;
            return;
        }
    }
    pn;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}