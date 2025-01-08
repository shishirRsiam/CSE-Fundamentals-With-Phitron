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




bool testcase()
{
    ll a, b; cin>>a>>b;

    if((a+b)%3) return false;

    if(a > 2*b or b > 2*a) return false;

    return true;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase() ? pyn;

    return 0;
}