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


ll NumberSpiral(ll Y, ll X)
{
    ll add = 0;
    if (Y > X)
    {
        ll ans = (Y - 1) * (Y - 1);

        if (Y % 2) add = X;
        else add = 2 * Y - X;
        return ans + add;
    }
    else
    {
        ll ans = (X - 1) * (X - 1);

        if (X % 2) add = 2 * X - Y;
        else add = Y;
        return ans + add;
    }
}



bool testcase()
{
    ll Y = 2, X = 3;
    cin>>Y>>X;
    cout<<NumberSpiral(Y, X)<<"\n";
    return true;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}