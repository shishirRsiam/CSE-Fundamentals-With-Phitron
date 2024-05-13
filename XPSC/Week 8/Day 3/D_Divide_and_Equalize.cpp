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

map<int,int>mp;

void prime_factorization(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            mp[i]++;
            n /= i;
        }
    }
    if(n > 1) mp[n]++;
}

void testcase()
{
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    for(auto x:a) prime_factorization(x);
    bool flag = true;
    for(auto [val, count] : mp)
    {
        if(count % n != 0)
        {
            flag = false;
            break;
        }
    }
    cout<<(flag ? "YES\n" : "NO\n");
    mp.clear();
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}